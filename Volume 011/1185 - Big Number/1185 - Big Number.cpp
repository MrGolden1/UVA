#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <sstream>
#include <stdio.h>
#include <math.h>

using namespace std;

int numberOfDigits[10000001];

int main()
{
    double cur = 0;
    for (int i =  1; i < 10000001 ; i++)
    {
        cur += log10(i);
        numberOfDigits[i] = int(cur) + 1;
    }
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%d\n", numberOfDigits[n]);
    }
}