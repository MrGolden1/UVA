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


int main()
{
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int l = s.length();
        if (s == "1" || s == "4" || s == "78")
        {
            cout << "+" << endl;
        }
        else if (s[l- 1] == '5' && s[l -2 ] == '3')
        {
            cout << "-" << endl;
        }
        else if (s[l-1] == '4' && s[0] == '9')
        {
            cout << '*' << endl;
        }
        else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
        {
            cout << '?' << endl;
        }
    }
    return 0;
}
