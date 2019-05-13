#include<string>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>
#include <map>
#include<iostream> 
#include <iomanip>
using namespace std;
#define UI unsigned int
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        char ch;
        int val;
        cin >> k;
        int value[257] = { 0 };
        for (int j = 0; j < k; j++)
        {
            cin >> ch >> val;
            value[ch + 128] = val;
        }
        int m;
        cin >> m;
        char line[10005];
        int cost = 0;
        cin.ignore();
        for (int j = 0; j < m; j++)
        {
            cin.getline(line, 10005);
            for (int p = 0; line[p] ; p++)
            {
                cost += value[line[p] + 128];
            }
        }
        cout << cost / 100 << "." << setfill('0') << setw(2) << cost % 100 << "$" << endl;
    }
    return 0;
}