#include <iostream>
#include <vector>
#include<cmath>
#include<iomanip>
#define ll unsigned long long 
#define ii unsigned int  
using namespace std;
vector<pair<int, int>> quric;
int main()
{
    int counter = 0;
    /*int p;
    int seprator;
    for (int i = 2; i < 9; i = i + 2)
    {
        p = pow(10, i);
        seprator = pow(10, i / 2);
        for (int j = 0 ; j < p ; j++)
        {
            if (pow(j % seprator + j / seprator, 2) == j)
            {
                cout << j << ",";
            }
        }
        cout << endl;
    }*/
    int q[] = {
        0,1,81, //3
        0,1,2025,3025,9801, // 5
        0,1,88209,494209,998001, //5
        0,1,4941729,7441984,24502500,25502500,52881984,60481729,99980001, //9
    };
    int n;
    while (cin >> n)
    {
        if (n == 2)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << setw(2) << setfill('0') << q[i] << endl;
            }
        }
        else if (n == 4)
        {
            for (int i = 3 ; i < 8; i++)
            {
                cout << setw(4) << setfill('0') << q[i] << endl;
            }
        }
        else if (n == 6)
        {
            for (int i = 8; i < 13; i++)
            {
                cout << setw(6) << setfill('0') << q[i] << endl;
            }
        }
        else if (n == 8)
        {
            for (int i = 13; i < 22; i++)
            {
                cout << setw(8) << setfill('0') << q[i] << endl;
            }
        }
    }
    system("pause>n");
    return 0;
}