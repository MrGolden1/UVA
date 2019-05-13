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
    int n;
    map < string, int> country;
    cin >> n;
    cin.ignore();
    string line, word;
    for (int i = 0; i < n; i++)
    {
        getline(cin, line);
        stringstream stream;
        stream << line;
        stream >> word;
        country[word]++;
    }
    for (auto x : country)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}