#include "../includes/BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <map>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Bar arguments" << std::endl;
    return 1;
  }
  std::string filename = "data.csv";
  std::ifstream data(filename);
  std::ifstream input(argv[1]);
  std::string line;
  std::map<time_t, double> btcValues;
  std::map<time_t, double> inputValues;
  if (!data.is_open()) {
    std::cerr << "Couldn't read file: " << filename << "\n";
    return 1;
  }
  while (getline(data, line)) {
    std::pair<time_t, double> pair;
    pair.first =
        parseDateTime(line.substr(0, line.find(",")).c_str(), "%Y-%m-%d");
    pair.second = atof(line.substr(line.find(",") + 1).c_str());
    btcValues.insert(pair);
    if (line.empty())
      break;
  }

  while (getline(input, line)) {
    if (!std::strcmp("date | value", line.c_str()))
      continue;
    if (!validateField(line)) {
      std::cout << "Error: bad input " << line.substr(0, line.find(","))
                << std::endl;
      continue;
    }
    time_t date =
        parseDateTime(line.substr(0, line.find(",")).c_str(), "%Y-%m-%d");
    float value = atof(line.substr(line.find("|") + 1).c_str());
    if (value >= 2147483648) {
      std::cout << "Error: too large a number " << std::endl;
      continue;
    }
    if (value < 0) {
      std::cout << "Error: negative number " << std::endl;
      continue;
    }
    if (date < parseDateTime("2009-01-02", "%Y-%m-%d")) {
      std::cout << "Error: BitCoin was not invented yet " << std::endl;
      continue;
    }
    std::map<time_t, double>::iterator it;
    std::map<time_t, double>::iterator ite = btcValues.end();
    for (it = btcValues.begin(); it != ite; it++) {
      if (it->first >= date)
        break;
    }
    std::cout << DateTime(date, "%Y-%m-%d") << " => " << std::setprecision(2)
              << value << " = " << it->second * value << std::endl;
    if (line.empty())
      break;
  }
}
