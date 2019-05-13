#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <sstream>
#include <stdio.h>
#include <math.h>
#include <map>
#include <iomanip>

#define ever (;;)

using namespace std;

class birth {
public:
    int y;
    int m;
    int d;
    string name;
};

bool comp(birth a, birth b)
{
    if (a.y > b.y)
        return false;
    else if (a.y < b.y)
        return true;
    else
    {
        if (a.m > b.m)
            return false;
        else if (a.m < b.m)
            return true;
        else
        {
            return a.d < b.d;
        }
    }
}


int main()
{
    vector<birth> v;
    int n;
    cin >> n;
    birth buf;
    for (int i = 0; i < n; i++)
    {
        cin >> buf.name >> buf.d >> buf.m >> buf.y;
        v.push_back(buf);
    }
    sort(v.begin(), v.end(), comp);
    cout << v[n -1].name << endl << v[0].name;
}