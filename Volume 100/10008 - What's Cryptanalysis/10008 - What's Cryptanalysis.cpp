#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <stack>
#include <queue>
#include <math.h>
#include <iomanip>

using namespace std;

#define ull unsigned long long


int main()
{
    int n;
    string line;
    cin >> n;
    cin.ignore();
    map < char, int > m;
    for (int i = 0; i < n; i++)
    {
        getline(cin, line);
        for (int j = 0; line[j] ; j++)
        {
            line[j] = toupper(line[j]);
            if (line[j] >= 'A' && line[j] <= 'Z')
            {
                m[line[j]]++;
            }
        }
    }
    vector <pair<int, char>>buf;
    for (auto x : m)
    {
        buf.push_back({ x.second , x.first });
    }
    for (int i = 0; i < buf.size(); i++)
    {
        for (int j = 0; j < buf.size() - i - 1; j++)
        {
            if (buf[j].first < buf[j+1].first)
            {
                swap(buf[j], buf[j + 1]);
            }
        }
    }
    for (int i = 0; i < buf.size(); i++)
    {
        cout << buf[i].second << ' ' << buf[i].first << endl;
    }
    return 0;
}