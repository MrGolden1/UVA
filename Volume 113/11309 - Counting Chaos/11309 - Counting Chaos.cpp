#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
//#include  <bitset>
//#include <Windows.h>
//#include <thread>

using namespace std;

void plusOneMinue(string &h, string & m)
{
    if (m[1] < '9')
    {
        m[1]++;
    }
    else
    {
        m[1] = '0';
        if (m[0] < '5')
        {
            m[0]++;
        }
        else
        {
            m[0] = '0';
            if (h[1] == '3' && h[0] == '2')
            {
                h[1] = h[0] = '0';
                return;
            }
            if (h[1] < '9')
            {
                h[1]++;
            }
            else
            {
                h[1] = '0';
                h[0]++;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string hour, minute;
        getline(cin, hour, ':');
        getline(cin, minute);

        while (true)
        {
            plusOneMinue(hour, minute);
            if (hour[0] == '0' && hour[1] == '0' && minute[0] == '0')
            {
                cout << hour << ":" << minute << endl;
                break;
            }
            else if (hour[0] == '0' && hour[1] == '0')
            {
                if (minute[0] == minute[1])
                {
                    cout << hour << ":" << minute << endl;
                    break;
                }
            }
            else if (hour[0] == '0')
            {
                if (hour[1] == minute[1])
                {
                    cout << hour << ":" << minute << endl;
                    break;
                }
            }
            else if (hour[0] == minute[1] && hour[1] == minute[0])
            {
                cout << hour << ":" << minute << endl;
                break;
            }
        }
    }
    return 0;
}