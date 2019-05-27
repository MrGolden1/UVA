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


using namespace std;

int INF = 1000000000;
int dist[150][150];
int p[150][150];
vector<int> path;

int main(void) {
    int n;
    while (cin >> n)
    {
        int c[101][101];
        string buf;
        c[0][0] = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cin >> buf;
                if (buf == "x")
                {
                    c[i][j] = c[j][i] = INF;
                }
                else
                {
                    c[i][j] = c[j][i] = stoi(buf);
                }
            }
            c[i][i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                dist[i][j] = c[i][j];
            }
        }

        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (dist[i][k] + dist[k][j] < dist[i][j])
                    {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }
        int max = -1;
        for (int i = 0; i < n; i++)
        {
            if (max < dist[0][i])
            {
                max = dist[0][i];
            }
        }
        cout << max << endl;
    }
    return 0;
}