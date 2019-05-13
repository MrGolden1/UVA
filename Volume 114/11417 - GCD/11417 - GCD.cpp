#include<iostream>
#include<string>

using namespace std;
int gcd(int a , int b)
{
    if(a%b==0)
        return b;
    return gcd( b , a%b );
}
int main()
{
    int n;
    while(cin >> n && n)
    {
        int G=0;
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
        {
            G+=gcd(i,j);
        }
        cout << G <<endl;
    }
    return 0;
}