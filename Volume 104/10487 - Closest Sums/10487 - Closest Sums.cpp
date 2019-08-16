#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    int counter = 0;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        counter++;
        int *x;
        x = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        map <int, int> sum;
        map <int, int>::iterator it , next , per;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    sum[x[i] + x[j]]++;
                }
            }
        }
        int m;
        int q;
        cin >> m;
        cout << "Case " << counter << ":" << endl;
        /*for (it = sum.begin(); it != sum.end(); it++)
        {
            cout << it->first << endl;
        }*/
        for (int i = 0; i < m; i++)
        {
            cin >> q;
            sum[q]++;
            if (sum[q] > 1)
            {
                cout << "Closest sum to " << q << " is " << q << "." << endl;
            }
            else
            {
                it = sum.find(q);
                int a, b;
                int num = it->first;
                if (it != sum.begin())
                {
                    it--;
                    a = it->first;
                    it++;
                }
                else
                {
                    it++;
                    b = it->first;
                    goto here2;
                }
                it++;
                if (it != sum.end())
                {
                    b = it->first;
                }
                else
                {
                    goto here1;
                }
                it--;
                if ((num - a) <= (b - num))
                {
                    here1:
                    cout << "Closest sum to " << q << " is " << a << "." << endl;
                }
                else
                {
                    here2:
                    cout << "Closest sum to " << q << " is " << b << "." << endl;
                }
                if (sum[q]==1)
                {
                    sum.erase(q);
                }
                else sum[q]--;
            }
        }
        sum.clear();
    }
    return 0;
}