#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function that changes a lowercase to uppercase
char upperCase(char chP)
{
    return toupper(chP); // Convert the character to uppercase
}

// Function that checks if the first letters are lower case or not..
string capitalizeFirstLetters(string & strP)
{
    // Stop one character early to avoid accessing strP[i + 1] past the end
    for (int i = 0; i < strP.length() - 1; i++)
    {
        if (islower(strP[0])) // Capitalize the first letter if it is lowercase
        {
            strP[0] = toupper(strP[0]); // Convert the character to uppercase
        }
        if (isspace(strP[i])) // Capitalize the character after a space
        {
            strP[i + 1] = upperCase(strP[i + 1]); // Call the function to convert the character to uppercase
        }
    }

    return strP; // Return the modified string
}

int main ()
{
    string text;

    cout << "Enter a random sentence: "; //Prompt the user to input a sentence
    getline(cin, text); //takes the user's input, used getline to read the entire input even the whitespace
    
    // Capitalize the first letter of every word entered by the user
    capitalizeFirstLetters(text);

    cout << "Capitalized text is: " << text; // Displaying another string with the first letter of each word capitalized

    return 0;
}
