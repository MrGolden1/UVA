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


int main()
{
    int n;
    while (scanf("%d", &n) && n)
    {
        int age[200] = { 0 };
        int buf;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &buf);
            age[buf]++;
        }
        int cnt = 0;
        for (int i = 0; i < 200; i++)
        {
            for (int j = 0; j < age[i]; j++)
            {
                cnt++;
                printf("%d", i);
                if(cnt != n)
                    printf(" ");
            }
        }
        printf("\n");
    }
}