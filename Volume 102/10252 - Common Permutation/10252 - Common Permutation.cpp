#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    string a, b;
    while (getline(cin , a))
    {
        getline(cin, b);
        map <char, int> m;
        for (int i = 0; a[i]; i++)
        {
            for (int j = 0; b[j] ; j++)
            {
                if (a[i] == b[j])
                {
                    b[j] = 125;
                    m[a[i]]++;
                    break;
                }
            }
        }
        map<char, int>::iterator it = m.begin();
        for (; it != m.end() ; it++)
        {
            for (int i = 0; i < it->second; i++)
            {
                cout << it->first;
            }
        }
        cout << endl;
    }
    return 0;
}