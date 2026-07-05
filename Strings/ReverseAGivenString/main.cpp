#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string
void reverseString(string strP)
{
    // Loop to reverse the string
    for (int i = strP.length() - 1; i >= 0; i--) // Iterating through the string in reverse order
    {
        cout << strP[i]; //Printing out each letter/character index-by-index
    }
}

int main ()
{
    string text = "Reverse a Given String.",
           name = "Trevor";

    cout << "Original String: " << text; //Displaying the original string
    cout << "\nReversed string: ";
    reverseString(text); //Displaying the reversed string


    cout << "\nOriginal String: " << name; //Displaying the original string
    cout << "\nReversed string: ";
    reverseString(name); //Displaying the reversed string

    return 0;
}

