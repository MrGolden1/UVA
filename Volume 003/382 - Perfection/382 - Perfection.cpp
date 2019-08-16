#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    typedef int t;
    t x,sum;
    cin >> x;
    cout << "PERFECTION OUTPUT" << endl;
    do
    {
        sum = 0;
        for (t i = 1; i <=x/2; i++)
        {
            if (x%i==0)
                sum = sum + i;
        }
        if (x == sum)
            cout << setw(5) << x << "  PERFECT" << endl;
        else if(sum>x)  
            cout << setw(5) << x << "  ABUNDANT" << endl;
        else cout << setw(5) << x << "  DEFICIENT" << endl;
        cin >> x;
    } while (x!=0);
    cout << "END OF OUTPUT" << endl;
    return 0;
}