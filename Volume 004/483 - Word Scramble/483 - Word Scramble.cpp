#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>
#include <map>
using namespace std;
int main()
{
    string line;
    string word;
    int first, last;
    while (getline(cin, line))
    {
        for (int i = 0; line[i] ;)
        {
            while (line[i] && line[i] == ' ')
            {
                i++;
            }
            first = i;
            while (line[i] && line[i] != ' ')
            {
                i++;
            }
            last = i;
            reverse(&line[first], &line[last]);
        }
        cout << line << endl;
    }
    return 0;
}