#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int m , n ;
    int answer;
    while(cin >> m >> n)
    {
        answer =  (m - 1) + m * ( n -1 )  ;
        cout << answer <<endl;
    }
    return 0;
}