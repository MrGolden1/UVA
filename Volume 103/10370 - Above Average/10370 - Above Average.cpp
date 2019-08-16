#include<iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int *arr;
        arr = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[j];
        }
        float avg = sum / n;
        int above = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > avg)
                above++;
        }
        cout.precision(3);
        cout << fixed << (float)(above) / n * 100 << "%" << endl;
        delete[] arr;
    }
    return 0;
}