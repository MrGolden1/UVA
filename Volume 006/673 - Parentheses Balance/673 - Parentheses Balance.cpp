#include<string>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>
#include <map>
#include<iostream> 
#include <iomanip>
#include <stack>

using namespace std;

bool isCorrect(string &line)
{
    stack <char> st;
    for (int i = 0; line[i] ; i++)
    {
        if (line[i] == ' ')
        {
            continue;
        }
        if (line[i] == '(' || line[i] == '[')
        {
            st.push(line[i]);
        }
        else
        {
            if (st.empty())
                return false;
            if (line[i] == ']')
            {
                if (st.top() != '[')
                {
                    return false;
                }
                else st.pop();
            }
            else // line[i] == ')'
            {
                if (st.top() != '(')
                {
                    return false;
                }
                else st.pop();
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    string line;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        getline(cin, line);
        if (isCorrect(line))
        {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    return 0;
}