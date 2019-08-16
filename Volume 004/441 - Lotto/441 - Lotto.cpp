#include <iostream>
using namespace std;
int *x;
int select[6];
void display(int k, int counter, int pivot)
{
    if (counter == 6)
    {
        for (int i = 0; i < 6; i++)
        {
            cout << select[i];
            if (i < 5)
                cout << " ";
        }
        cout << endl;
        return;
    }
    for (int i = pivot; i < k + counter - 5; i++)
    {
        select[counter] = x[i];
        display(k, counter + 1, i + 1);
    }
    return;
}
int main()
{
    int k;
    bool flag = false;
    while (cin  >> k)
    {
        if (k == 0)
            break;
        else if (flag)
        cout << endl;
        x = new int[k];
        for (int i = 0; i < k; i++)
        {
            cin >> x[i];
        }
        display(k, 0, 0);
        flag = true;
        delete[] x;
    }
    return 0;
}