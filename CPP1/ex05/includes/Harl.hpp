#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {

private:
  void (Harl::*_messages[4])(void);
  void _debug(void);
  void _info(void);
  void _warning(void);
  void _error(void);

public:
  Harl(void);
  ~Harl(void);

  void complain(std::string level);
};

#endif
