#include<iostream>
#include<vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        bool flag = true;
        int *x;
        x = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        vector<int> deffrance;
        for (int i = 0; i < n - 1; i++)
        {
            deffrance.push_back(abs(x[i] - x[i + 1]));
        }
        sort(deffrance.begin(), deffrance.end());
        for (int i = 1; i <= n - 1; i++)
        {
            if (i != deffrance[i - 1])
            {
                flag = false;
                break;
            }
        }
        deffrance.clear();
        if (!flag)
            cout << "Not jolly" << endl;
        else cout << "Jolly" << endl;
    }
    return 0;
}