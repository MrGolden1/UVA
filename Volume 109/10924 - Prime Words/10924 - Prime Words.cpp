#include<iostream>
#include<string>
#include<math.h>
using namespace std;
#include<math.h>
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
int main()
{
    string word;
    int sum;
    while (cin>>word)
    {
        sum = 0;
        for (int i = 0; word[i]; i++)
        {
            if (word[i] > 90)
                sum = sum + ((int)word[i] - 96);
            else
                sum = sum + ((int)word[i] - 38);
        }
        if (prime_check(sum))
            cout << "It is a prime word." << endl;
        else cout << "It is not a prime word." << endl;
    }
    return 0;
}