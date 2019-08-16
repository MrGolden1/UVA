#include <iostream>
#include <map>
#include<iterator>
#include<string>
#include <sstream>
using namespace std;
int main()
{
    map<string, int > words;
    string line;
    string word;
    while (getline(cin,line))
    {
        stringstream ob;
        for (int i = 0; line[i] ; i++)
        {
            ((((line[i]) >= 'A') && ((line[i]) <= 'Z') || ((line[i]) >= 'a') && ((line[i]) <= 'z')) ? (0) : (line[i] = ' '));
        }
        ob << line;
        while (ob >> word)
        {
            for (int i = 0; word[i]; i++)
            {
                ((((word[i]) >= 'A') && ((word[i]) <= 'Z')) ? (word[i] = (word[i]) - 'A' + 'a') : (0));
            }
            words[word]++;
        }
    }
    map<string, int>::iterator it = words.begin();
    for (int i = 0; it != words.end() ; i++)
    {
            cout << it->first << endl;
            it++;
    }
    system("pause>n");
    return 0;
}