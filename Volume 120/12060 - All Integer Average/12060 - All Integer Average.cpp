#include<iostream>
#include <cmath>
using namespace std;
int gcd(int a, int b)
{
    if (a%b == 0)
        return b;
    return gcd(b, a%b);
}
int DigitCounter(int n)
{
    int i = 0;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    return i;
}
int main()
{
    int n;
    int x[100];
    int sum;
    int counter = 1;
    while (cin >> n)
    {
        if (n == 0)
            break;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            sum += x[i];
        }
        if (sum % n == 0)
        {
            if (sum >= 0)
                cout << "Case " << counter << ":" << endl << sum / n << endl;
            else cout << "Case " << counter << ":" << endl << "- " << abs(sum) / n << endl;
        }
        else
        {
            if (sum >= 0)
            {
                int sahih, soorat, makhraj;
                sahih = sum / n;
                soorat = sum % n;
                makhraj = n;
                int bmm;
                bmm = gcd(makhraj, soorat);
                while (bmm != 1)
                {
                    soorat = soorat / bmm;
                    makhraj = makhraj / bmm;
                    bmm = gcd(makhraj, soorat);
                }
                int space = DigitCounter(sahih) + DigitCounter(makhraj) - DigitCounter(soorat);
                cout << "Case " << counter << ":" << endl;
                for (int i = 0; i < space; i++)
                {
                    cout << ' ';
                }
                cout << soorat << endl;
                if (sahih != 0)
                    cout << sahih;
                for (int i = 0; i < DigitCounter(makhraj); i++)
                {
                    cout << '-';
                }
                cout << endl;
                for (int  i = 0; i < DigitCounter(sahih); i++)
                {
                    cout << ' ';
                }
                cout << makhraj;
                cout << endl;
            }
            else
            {
                sum = abs(sum);
                int sahih, soorat, makhraj;
                sahih = sum / n;
                soorat = sum % n;
                makhraj = n;
                int bmm;
                bmm = gcd(makhraj, soorat);
                while (bmm != 1)
                {
                    soorat = soorat / bmm;
                    makhraj = makhraj / bmm;
                    bmm = gcd(makhraj, soorat);
                }
                int space = DigitCounter(sahih) + DigitCounter(makhraj) - DigitCounter(soorat) + 2;
                cout << "Case " << counter << ":" << endl;
                for (int i = 0; i < space ; i++)
                {
                    cout << ' ';
                }
                cout << soorat << endl;
                cout << "- ";
                if (sahih != 0)
                    cout << sahih;
                for (int i = 0; i < DigitCounter(makhraj); i++)
                {
                    cout << '-';
                }
                cout << endl;
                for (int i = 0; i < DigitCounter(sahih) + 2; i++)
                {
                    cout << ' ';
                }
                cout << makhraj;
                cout << endl;
            }
        }
        counter++;
    }
    return 0;
}