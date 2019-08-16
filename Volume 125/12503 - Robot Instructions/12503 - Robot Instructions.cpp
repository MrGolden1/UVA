#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t, n;
    int go;
    cin >> t;
    string str;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int *x;
        x = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> str;
            if (str == "LEFT")
                x[j] = -1;
            else if (str == "RIGHT")
                x[j] = 1;
            else if ( str == "SAME"){
                cin >> str;
                cin >> go;
                x[j] = x[go-1];
            }
        }
        int position = 0;
        for (int j = 0; j < n; j++)
        {
            position = position + x[j];
        }
        cout << position << endl;
        delete[] x;
    }
    return 0;
}