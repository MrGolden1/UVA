#include <iostream>
using namespace std;
int maxSubArraySum(int a[], int size)
{
    int max_so_far = (-2147483647 - 1), max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int x[10001];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        int max = maxSubArraySum(x, n);
        if (max > 0)
            cout << "The maximum winning streak is " << max << "." << endl;
        else cout << "Losing streak." << endl;
    }
    return 0;
}