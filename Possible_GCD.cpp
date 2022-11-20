#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int x, y;
        cin >> x >> y;
        int c = 0, r = 0;
        for (int j = 1; j * j <= abs(y - x); j++)
        {
            if (j * j == abs(y - x))
                r = 1;
            else if (abs(y - x) % j == 0)
                c++;
        }
        cout << (2 * c) + r << "\n";
    }
}