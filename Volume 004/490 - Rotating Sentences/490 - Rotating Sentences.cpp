#include<string>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>
#include <map>
#include<iostream> 
#include <iomanip>
#include <stack>
#include <string.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    char x[200][200];
    char transpose[200][200] = { 0 };
    int max_length = -1;
    int i = 0;
    int size[200];
    while (cin.getline(x[i], 200))
    {
        size[i] = strlen(x[i]);
        if (size[i] > max_length)
        {
            max_length = size[i];
        }
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        memset(&x[j][size[j]], ' ', max_length - size[j] );
    }
    for (int j = 0; j < max_length; j++)
    {
        for (int k = 0; k < i; k++)
        {
            transpose[j][k] = x[k][j];
        }
        reverse(&transpose[j][0], &transpose[j][i]);
    }
    for (int j = 0; j < max_length; j++)
    {
        cout << transpose[j] << endl;
    }
    return 0;
}