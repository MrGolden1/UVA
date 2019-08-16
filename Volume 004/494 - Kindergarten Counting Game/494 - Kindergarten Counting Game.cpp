#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string  line;
    while (getline(cin, line))
    {
        for (int i = 0; line[i] ; i++)
        {
            if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
            {
            }
            else line[i] = ' ';
        }
        stringstream ob;
        string word;
        ob << line;
        int counter = 0;
        while (ob >> word)
        {
            counter++;
        }
        cout << counter << endl;
    }
    return 0;
}#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string  line;
    while (getline(cin, line))
    {
        for (int i = 0; line[i] ; i++)
        {
            if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
            {
            }
            else line[i] = ' ';
        }
        stringstream ob;
        string word;
        ob << line;
        int counter = 0;
        while (ob >> word)
        {
            counter++;
        }
        cout << counter << endl;
    }
    return 0;
}