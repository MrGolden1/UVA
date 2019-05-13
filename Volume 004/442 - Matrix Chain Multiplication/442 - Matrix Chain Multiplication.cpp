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

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<char, pair<int, int>> m;
    char name;
    int row, col;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> row >> col; 
        m[name] = make_pair(row, col);
    }
    string line;
    while (cin  >> line)
    {
        bool valid = true;
        stack<pair<int, int>> st;
        int muls = 0;
        for (int i = 0; line[i] ; i++)
        {
            if (line[i] == '(')
            {
                continue;
            }
            else if (line[i] == ')')
            {
                if (st.size() == 1)
                {
                    continue;
                }
                pair<int, int> a, b;
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                if (a.first != b.second)
                {
                    valid = false;
                    cout << "error" << endl;
                    break;
                }
                muls += a.second * b.first * b.second;
                st.push(make_pair(b.first, a.second));
            }
            else
            {
                st.push(make_pair(m[line[i]].first, m[line[i]].second));
            }
        }
        if (valid)
            cout << muls << endl;
    }
}