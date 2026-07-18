#include <string>
#include <cctype>
using namespace std;

string disemvowel(const string& str) {
  
  string tempStr;
  tempStr = str;
  int length = tempStr.size();
  
  for (int i = 0; i < length; i++)
    {
    
    if (tolower(tempStr[i]) == 'a' ||
        tolower(tempStr[i]) == 'e' ||
        tolower(tempStr[i]) == 'i' ||
        tolower(tempStr[i]) == 'o' ||
        tolower(tempStr[i]) == 'u')
      {
      tempStr.erase(i, 1);
      i--;
      length--;
    }

  }
  
  return tempStr;
}