#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
#define max(a,b) (((a) > (b)) ? (a) : (b))
int x[1001][1001];
string str1, str2;
int lcs(int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    if (str1[i] == str2[j])
    {
        if (x[i - 1][j - 1] == -1)
            x[i - 1][j - 1] = lcs(i - 1, j - 1);
        return 1 + x[i - 1][j - 1];
    }
    if (x[i][j - 1] == -1)
        x[i][j - 1] = lcs(i, j - 1);
    int a = x[i][j - 1];
    if (x[i - 1][j] == -1)
        x[i - 1][j] = lcs(i - 1, j);
    int b = x[i - 1][j];
    return max(a, b);
}
int main()
{
    int m, n;
    for (int i = 0; i < 1001; i++)
    {
        x[0][i] = 0;
    }
    for (int i = 0; i < 1001; i++)
    {
        x[i][0] = 0;
    }
    int counter = 1;
    while (getline(cin, str1))
    {
        if (str1 == "#")
            break;
        getline(cin, str2);
        str1 = str1 + " ";
        str2 = str2 + " ";
        m = str1.length();
        n = str2.length();
        for (int i = m - 1; i > -1; i--)
        {
            str1[i + 1] = str1[i];
        }
        str1[0] = ' ';
        for (int i = n - 1; i > -1; i--)
        {
            str2[i + 1] = str2[i];
        }
        str2[0] = ' ';
        //cout << str1 << endl << str2 << endl;
        //cout << "------>" << m << "    " << n << endl;
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                x[i][j] = -1;
            }
        }
        x[0][0] = 0;
        cout << "Case #"<< counter << ": you can visit at most " << lcs(m, n) - 1 << " cities." << endl;
        counter++;
        /*  for (int i = 0; i < m ; i++)
            {
                for (int j = 0; j < n ; j++)
                {
                    cout << setw(4) << x[i][j];
                }
                cout << endl;
            }*/
    }
}