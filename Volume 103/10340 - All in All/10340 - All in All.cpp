#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <sstream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        stringstream s(str);
        string a, b;
        s >> a >> b;
        int l = a.length();
        int i = 0, j = 0;
        while (a[j] && b[i])
        {
            if (a[j] == b[i])
            {
                j++;
                i++;
            }
            else i++;
        }
        if (j == l)
        {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}