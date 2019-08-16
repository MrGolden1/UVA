#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    int f, r;
    while (cin >> f >> r)
    {
        float *a, *b;
        a = new float[f];
        b = new float[r];
        for (int i = 0; i < f; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < r; i++)
        {
            cin >> b[i];
        }
        map < float, int> ratio;
        for (int i = 0; i < f; i++)
        {
            for (int j = 0; j < r; j++)
            {
                ratio[b[j] / a[i]]++;
            }
        }
        float max = 0.0;
        map <float, int>::iterator x = ratio.begin(), y = ratio.begin();
        y++;
        if (x->second > 1)
        {
            if (1 > max)
                max = 1;
        }
        for (; y != ratio.end(); y++, x++)
        {
            if (y->second > 1)
            {
                if (1 > max)
                    max =1 ;
            }
            if (y->first / x->first > max)
                max = y->first / x->first;
            //cout << y->first / x->first << endl;
        }
        max = max + 0.0000001;
        cout.precision(2);
        cout << fixed << max << endl;
        cout.precision(7);
    }
    return 0;
}