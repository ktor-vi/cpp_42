#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>

int main(int argc, char **argv)
{
  if ( argc != 2)
  {
      std::cout << "Error." << std::endl;
      std::exit(1);
  }
  std::stack<char> st = parseExpr(argv[1]);
  int res = st.top() - 48;
  st.pop();
  int n = st.top() - 48 ;
  st.pop();
  std::stack<int> rst;
  while(!st.empty()) 
  {
  std::cout << "res: "<< res << " n : " << n << " i: "<< st.top() << std::endl;
    if(!isdigit(st.top()))
    {
    if(st.top() == '+' )
      res += n;
    if(st.top() == '-' )
      res -= n;
    if(st.top() == '/' )
      res /= n;
    if(st.top() == '*' )
      res *= n;
    st.pop();
    if(!st.empty() && !isdigit(st.top()))
      {
        n = rst.top();
      }
    }
    else {
    n = st.top() - 48;
    st.pop();
    if(!st.empty() && isdigit(st.top()))
      {
        rst.push(n);
        n = st.top() - 48;
      }

    }
  }
  std::cout << res << std::endl;
}
