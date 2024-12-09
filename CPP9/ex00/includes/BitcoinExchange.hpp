#include <climits>
#include <cstring>
#include <ctime>
#include <string>
time_t parseDateTime(const char *datetimeString, const char *format);
std::string DateTime(time_t time, const char *format);
bool validateDateTime(std::string dateTimeString);
bool validateField(std::string line);
