#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string sample = "Reverse a Given String.";

    for (int i = sample.length() - 1; i >= 0; i--)
    {
        cout << sample[i];
    }

    return 0;
}

