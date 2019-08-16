#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    /** 1/k = 1/x + 1/y
    When x and y are equal, they are both 2k.

    1/k = 1/(2k) + 1/(2k)

    if x is larger than 2k, then y must be smaller than 2k.
    Since y can't be k, we only need to check y in [k+1, 2k].
    But how to compute x?
    1/x = 1/k - 1/y
    = (y-k) / (k*y)

    So if y-k divides k*y, then x = (k*y) / (y-k).
    */
    int k;
    vector <pair<int, int>> fraction;
    int ky , y_k;
    while (cin >> k)
    {
        for (int i = k + 1; i <= 2 * k; i++)
        {
            ky = k * i;
            y_k = i - k;
            if (ky % y_k == 0)
            {
                fraction.push_back(make_pair(ky / y_k, i));
            }
        }
        cout << fraction.size() << endl;
        for (int i = 0; i < fraction.size(); i++)
        {
            cout << "1/" << k << " = " << "1/" << fraction[i].first << " + " << "1/" << fraction[i].second << endl;
        }
        fraction.clear();
    }
    system("pause>n");
    return 0;
}