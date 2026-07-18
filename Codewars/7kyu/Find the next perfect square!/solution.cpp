#include <cmath>

long int findNextSquare(long int sq) {
  
  double squareRoot = sqrt(sq);
  
  if (squareRoot == round(squareRoot))
    {
    squareRoot++;
    
    return squareRoot * squareRoot;
  }
  else
    {
    return -1;
  }
}