#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <sstream>
#include <stdio.h>
#include <math.h>
#include <map>
#include <iomanip>

#define ever (;;)


using namespace std;

int main()
{
    char a[264];
    for (int i = 0; i < 256; i++)
    {
        a[i] = i;
    }
    
    a['0'] = 'O';
    a['1'] = 'I';
    a['2'] = 'Z';
    a['3'] = 'E';
    a['4'] = 'A';
    a['5'] = 'S';
    a['6'] = 'G';
    a['7'] = 'T';
    a['8'] = 'B';
    a['9'] = 'P';

    int n;
    cin >> n;
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++)
    {
        while (getline(cin,s))
        {
            if (s == "\n" || s== "")
            {
                break;
            }
            for (int j = 0; s[j] ; j++) 
            {
                cout << a[s[j]];
            }
            cout << endl;
        }
        if (i != n-1)
        {
            cout << endl;
        }
    }
}