#include<iostream>
using namespace std;
int main()
{
    typedef int T;
    T n, b, h, w;
    T price;
    T min_cost;
    T capasity;
    bool flag1;
    while (cin>>n>>b>>h>>w)
    {
        flag1 = false;
        bool flag ;
        min_cost = 2500000;
        for (int i = 0; i < h; i++)
        {
            cin >> price;
            flag = false;
            for (int j = 0; j < w; j++)
            {
                cin >> capasity;
                if (capasity >= n)
                    flag = true;
            }
            if (price*n < min_cost && flag == true)
            {
                min_cost = price * n;
                flag1 = true;
            }
        }
        if (flag1 == true && min_cost <= b)
            cout << min_cost << endl;
        else cout << "stay home" << endl;
    }
    return 0;
}