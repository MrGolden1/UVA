#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <sstream>
#include <stdio.h>
#include <math.h>
#include <map>
#include <iomanip>

#define ever (;;)


using namespace std;




int main() {
    int n;
    int a[100001];
    while (cin >> n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 3)
        {
            puts("0");
            continue;
        }
        int e = sum / 3;
        set <int> v;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s += a[i];
            s%= sum;
            v.insert(s);
        }
        int sol = 0;
        s = 0;
        for (int i = 0; i < n; i++)
        {
            s+=a[i];
            if (v.find((s + e)%sum ) != v.end() && v.find((s + 2 * e) %sum) != v.end())
            {
                sol++;
            }
        }
        printf("%d\n", sol / 3);
    }
    return 0;
}
