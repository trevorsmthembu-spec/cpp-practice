#include <string>
using namespace std;

std::string no_space(const string& x)
{
  string newStr;
      for (int i = 0; i <= x.length() - 1; i++)
    {
        if (!isspace(x[i]))
        {
            newStr += x[i];
        }
    }
   return newStr;
}