#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>
#include <map>
using namespace std;
string Beiju(string &line , int i)
{
    string buf = "";
    while (i >= 0 && line[i] != '[' && line[i] != ']')
    {
        buf = line[i] + buf;
        i--;
    }
    if (i == -1)
    {
        return buf;
    }
    if (line[i] == '[')
    {
        return buf + Beiju(line, --i);
    }
    if(line[i] == ']')
    {
        return Beiju(line, --i) + buf;
    }
}
int main()
{
    string line;
    while (getline(cin,line))
    {
        cout << Beiju(line, line.size() - 1) << endl;
    }
    system("pause>n");
    return 0;
}

