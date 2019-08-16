#include<iostream>
using namespace std;
int main()
{
    int t, n, curr_wall, per_wall; //// curr_wall : current wall , per_wall : perivious wall
    int l, h;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        l = 0;
        h = 0;
        cin >> n;
        cin >> per_wall;
        for (int j = 0; j < n-1; j++)
        {
            cin >> curr_wall;
            if (curr_wall > per_wall)
                h++;
            if (curr_wall < per_wall)
                l++;
            per_wall = curr_wall;
        }
        cout << "Case " << i + 1 << ": " << h << " " << l << endl;
    }
    return 0;
}