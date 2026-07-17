#include <iostream>
#include <string>
using namespace std;

string changedSentence(string senP)
{
    //Insert * before every Original s
    int pos = senP.find("s");
    while (pos != string::npos)
    {
        senP.insert(pos, "*");
        pos = senP.find("s", pos + 2);
    }

    // Replace every z with s
    pos = senP.find("z");
    while (pos != string::npos)
    {
        senP.replace(pos, 1, "s");
        pos = senP.find("z", pos + 1);
    }

    return senP;
}

int main ()
{
    string sentence = "Susan realized that the organization's size was small.";

    cout << "Original: " << sentence << endl;
    
    cout << "Changed: " << changedSentence(sentence) << endl;

    return 0;
}