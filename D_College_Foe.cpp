#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (b * (b + 1) / 2 < c)
            cout << "-1\n";
        else if (a * (a + 1) / 2 >= c)
            cout << a << "\n";
        else
        {
            ll n = (-1 + sqrt(1 + 8 * c)) / 2;
            if (n * (n + 1) / 2 == c)
                cout << n << "\n";
            else
                cout << n + 1 << "\n";
        }
    }
}
