#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int t;
double d, v, u , delta ;
cin >> t ;
for (int i = 0; i < t; i++)
{
    cin >> d >> v >> u ;
    delta = pow(u ,2)-pow(v , 2) ;
    if ( delta <= 0 || v == 0 || u==0 ) 
        cout << "Case " << i+1 << ": can't determine" << endl ;
    else 
    {
    cout.precision (3);
    cout <<"Case " << i+1 << ": " << fixed << abs((d/u)-d/sqrt(delta)) << endl;
    }
}
system("pause>n");
return 0;
}