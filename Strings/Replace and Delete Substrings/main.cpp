#include <iostream>
#include <string>
using namespace std;

void upString(string & senP, string findP, string replaceP, string deleteP)
{
    //first replace all occurrences of findP in senP with replaceP
    int pos = 0;
    pos = senP.find(findP, 0);
    while (pos != -1)
    {

        senP.replace(pos, 3, replaceP);
        pos = senP.find(findP, pos + 3);
    }
    //now delete all occurrences of delete in senP
    pos = 0;
    pos = senP.find(deleteP);
    while (pos != -1)
    {
        senP.erase(pos, 3);
        pos = senP.find(deleteP, pos);
    }
}

int main ()
{
    string sentence;
    getline(cin, sentence);
    upString(sentence, " a ", "the", "big");
    cout << sentence << endl;
    return 0;
}
