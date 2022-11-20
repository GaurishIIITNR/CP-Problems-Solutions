// HHM
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        ll a, b;
        cin >> a >> b;
        ll mx = INT_MIN, xi, yi, mn = INT_MAX, xni, yni;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                ll d;
                cin >> d;
                if (d > mx)
                {
                    mx = d;
                    xi = i;
                    yi = j;
                }
                // if (d < mn)
                // {
                //     mn = d;
                //     xni = i;
                //     yni = j;
                // }
            }
        }
        ll c= max(((xi + 1) * (xi + 1)), ((a - xi) * (a - xi)));
        ll d = max(((yi + 1) * (yi + 1)), ((b - yi) * (b - yi)));

        cout << max(c, d) << "\n";
    }
}