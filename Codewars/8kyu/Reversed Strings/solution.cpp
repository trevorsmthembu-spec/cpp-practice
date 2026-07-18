#include <string>
using namespace std;
std::string reverseString(const string &str)
{
  // your Code is Here ... enjoy !!!
  size_t strSize = str.size();
  string result;
  
  for (int i = strSize - 1 ; i >= 0; i--)
    {
    result += str[i];
  }
  
    return result;
}