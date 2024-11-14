#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
class Brain{
private:
  std::string ideas[100];
public:
  Brain();
  Brain(const Brain &rhs);
  Brain &operator=(const Brain &rhs);
  virtual ~Brain();
  
  std::string getIdea(int n);
  void setIdea(int n, std::string idea);
};
#endif
