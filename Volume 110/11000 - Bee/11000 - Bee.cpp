#include<iostream>
#include<string>

using namespace std;


int main()
{
    int n;
    unsigned long long female[1000] = {0} ;
    unsigned long long male[1000] = {0};
    const int s = 1000;
    for(int i = 0 ; i < s ; i++)
    {
        female[i+1] = male[i] + 1;
        male[i+1] = female[i] + male[i];
    }
    while(cin >> n && n!= -1)
    {
        n++;
        cout << male[n] << " " << female[n] + male[n ] <<endl;
    }
    return 0;
}