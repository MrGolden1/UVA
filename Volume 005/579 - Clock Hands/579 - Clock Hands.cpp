#include<iostream>
#include<string>
#include<math.h>
using namespace std;
float get_hour_degree(float hour, float sec);
float get_sec_degree(float sec);
int main()
{
    float hour, sec;
    char buf;
    cin >> hour >> buf >> sec;
    cout.precision(3);
    do
    {
        float degree = abs(get_sec_degree(sec) - get_hour_degree(hour, sec));
        if (degree <= 180)
            cout << fixed << degree << endl;
        else cout << fixed << 360 - degree << endl;
        cin >> hour >> buf >> sec;
    } while (hour!=0);
    return 0;
}

float get_hour_degree(float hour, float sec)
{
    return (hour * 30) + (sec * 0.5);
}

float get_sec_degree(float sec)
{
    return sec * 6;
}

