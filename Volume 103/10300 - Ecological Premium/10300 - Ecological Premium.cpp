#include<iostream>
using namespace std;
int main()
{
    unsigned long long t, f, area, animal, enviroment;
    unsigned long long multiply;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> f;
        unsigned long long sum = 0;
        for (int i = 0; i < f; i++)
        {
            cin >> area >> animal >> enviroment;
            if (animal == 0 || area == 0 || enviroment == 0)
                multiply = 0;
            else multiply = area * enviroment;
            sum = sum + multiply;
        }
        cout << sum << endl;

    }
    return 0;
}