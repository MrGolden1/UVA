#include<iostream>
#include<string>
#include<math.h>
using namespace std;
void print(int low, int high, int n, int i);
int main()
{
    int n;
    int blank;
    cin >> n;
    do
    {
        if (n % 4 == 0)
            blank = 0;
        else blank = 4 - (n % 4);
        print(1, n + blank, n, 1);
        cin >> n;
    } while (n!=0);
    return 0;
}

void print(int low, int high, int n, int i)
{
    if (high < low)
        return;
    if (i == 1)
        cout << "Printing order for " << n << " pages:" << endl;
    cout << "Sheet " << i << ", front: ";
    if (high > n)
        cout << "Blank, ";
    else cout << high << ", ";
    high--;
    cout << low << endl;
    low++;
    if (low > n)
        return;
    cout << "Sheet " << i << ", back : ";
    cout << low << ", ";
    low++;
    if (high > n)
        cout << "Blank" << endl;
    else cout << high << endl;
    high--;
    print(low, high, n, i + 1);
}
