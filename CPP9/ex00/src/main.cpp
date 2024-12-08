#include "../includes/BitcoinExchange.hpp"
#include <iostream>
int main() {
  const char *datetimeString = "2024-02-17";
  const char *format = "%Y-%m-%d";
  bool valid = validateDateTime(datetimeString);
  std::cout << valid << std::endl;
  time_t parsedTime = parseDateTime(datetimeString, format);
  std::string formattedTime = DateTime(parsedTime, format);
  std::cout << "Parsed Time--> " << parsedTime << std::endl;
  std::cout << "Formatted Time--> " << formattedTime << std::endl;
  return 0;
}
