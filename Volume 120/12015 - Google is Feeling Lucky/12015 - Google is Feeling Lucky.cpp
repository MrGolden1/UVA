#include <iostream>
#include<string>
using namespace std;
struct web
{
    string name;
    int value;
}n[10];
int main()
{
    int t;
    cin >> t;
    int most;
    for (int i = 0; i < t; i++)
    {
        most = 0;
        for (int j = 0; j < 10; j++)
        {
            cin >> n[j].name >> n[j].value;
            if (n[j].value > most)
                most = n[j].value;
        }
        cout << "Case #" << i + 1 << ":" << endl;
        for (int j = 0; j < 10; j++)
        {
            if (n[j].value == most)
                cout << n[j].name << endl;
        }
    }
    return 0;
}