#include "../includes/BitcoinExchange.hpp"

time_t parseDateTime(const char *datetimeString, const char *format) {
  struct tm tmStruct;
  memset(&tmStruct, 0, sizeof(tmStruct));
  strptime(datetimeString, format, &tmStruct);
  return mktime(&tmStruct);
}

std::string DateTime(time_t time, const char *format) {
  char buffer[90];
  struct tm *timeinfo = localtime(&time);
  strftime(buffer, sizeof(buffer), format, timeinfo);
  return buffer;
}

bool validateDateTime(std::string dateTimeString) {
  int ys = dateTimeString.find_first_of("0123456789");
  int ye = dateTimeString.find_first_of("-");
  int ds = dateTimeString.find_last_of("-");
  int de = dateTimeString.find_last_of("0123456789");

  if (ye - ys != 4 || ds - ye != 3 || de - ds != 2)
    return false;

  int year = atoi(dateTimeString.substr(ys, 4).c_str());
  int months = atoi(dateTimeString.substr(ye + 1, 2).c_str());
  int days = atoi(dateTimeString.substr(ds + 1, 2).c_str());
  if (months < 0 || days < 0 || months > 12 || days > 31)
    return false;
  if (!(year % 4 == 0 && year % 100 != 0) && months == 2 && days > 28)
    return false;
  else if ((year % 4 == 0 && year % 100 != 0) && months == 2 && days > 29)
    return (false);

  return true;
}

bool validateField(std::string line) {
  if (!std::strcmp("date | value", line.c_str()))
    return true;
  if (!validateDateTime(line.substr(0, line.find("|") - 1)))
    return false;

  for (size_t i = 0; i < line.length(); i++) {
    if (!isdigit(line[i]) && line[i] != ' ' && line[i] != '|' &&
        line[i] != '-' && line[i] != '.' && line[i] != '\n') {
      return false;
    }
  }
  if (line.find("|") != 11 &&
      (line[line.find("|") - 1] != ' ' || line[line.find("|") + 1] != ' '))
    return (false);
  return true;
}
