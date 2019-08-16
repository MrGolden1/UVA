#include<iostream>
#include<math.h>
using namespace std;
inline bool prime_check(int n)
{
    int jazr = sqrt(n);
    for (int j = 2; j <= jazr; j++)
    {
        if (n%j == 0)
        {
            return false;
        }
    }
    return true;
}
inline int big_prime(int n)
{
    for (int i = n; i > 0; i = i - 2)
    {
        if (prime_check(i))
            return i;
    }
}
int main()
{
    int n, n1, n2;
    cin >> n;
    do
    {
        if (n == 4)
            cout << 1 << endl;
        else 
        {
            int k = 0;
            n1 = big_prime(n - 3);
            n2 = n - n1;
            while (n1 >= n / 2)
            {
                if (prime_check(n2))
                    k++;
                n1 = big_prime(n1 - 2);
                n2 = n - n1;
            }
            cout << k << endl;
        }
        cin >> n;
    } while (n != 0);
    return 0;
}