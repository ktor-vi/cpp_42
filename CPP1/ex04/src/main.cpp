#include <fstream>
#include <iostream>

std::string replaceInLine(std::string text, std::string to_find,
                          std::string to_fill) {
  size_t pos = 0;
  int find_length = to_find.length();
  while (pos != std::string::npos) {
    pos = text.find(to_find, pos);
    if (pos != std::string::npos) {
      text.erase(pos, find_length);
      text.insert(pos, to_fill);
    }
  }
  return (text);
}

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "Usage: ./SED <filename> <str1> <str2>";
    return 1;
  }
  std::ifstream file(argv[1]);
  std::string text;
  std::string oname = argv[1];
  oname.append(".replace");
  std::ofstream outfile(oname);
  while (!file.eof()) {
    std::string text;
    getline(file, text);

    outfile << replaceInLine(text, argv[2], argv[3]) << std::endl;
  }
  return 0;
}
