#include<iostream>
using namespace std;
int main()
{
    float h, u, d;
    float f;
    float fatigue;
    int day;
    float l;
    cin >> h >> u >> d >> f;
    do
    {
        day = 1;
        bool result;
        l = 0.0;
        fatigue = 0.0;
        f = f / 100.0;
        while (true)
        {
            if (fatigue < u)
            {
                l = l + u - fatigue;
            }
            if (l > h)
            {
                result = true;
                break;
            }
            l = l - d;
            if (l < 0)
            {
                result = false;
                break;
            }
            day++;
            fatigue = fatigue + (u*f);
        }
        if (result)
            cout << "success on day " << day << endl;
        else cout << "failure on day " << day << endl;
        cin >> h >> u >> d >> f;
    } while (h != 0);
    return 0;
}