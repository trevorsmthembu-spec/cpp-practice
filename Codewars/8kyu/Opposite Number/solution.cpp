#include <cmath>

int opposite(int number) 
{
  if(number < 0) {
    return abs(number);
  } else {
    return -number;
  }
}