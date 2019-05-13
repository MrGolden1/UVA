#include<iostream>
#include<string>
#include <map>
using namespace std;

int main()
{
    int n , m;
    while(cin >> n >> m && n && m )
    {
        map <int,int> cd;
        int buf;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> buf;
            cd[buf]++;
        }
        for(int i = 0 ; i < m ; i++)
        {
            cin >> buf;
            cd[buf]++;
        }
        int answer = 0;
        for(auto x : cd)
        {
            if(x.second > 1)
                answer++;
        }
        cout << answer <<endl;
    }
    return 0;
}