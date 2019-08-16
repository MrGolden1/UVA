#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float r, n, d;
    cin >> r >> n;
    int i = 1;
    do
    {
        d = r / n;
        if(d==1 || n>r)
            cout << "Case " << i << ": " << 0 << endl;
        else
        {
            r = r - n;
            d = r / n;
            if (d <= 26)
                cout << "Case " << i << ": " << ceil(d) << endl;
            else cout << "Case " << i << ": impossible" << endl;
        }
        i++;
        cin >> r >> n;
    } while (r!=0&&n!=0);
    return 0;
}