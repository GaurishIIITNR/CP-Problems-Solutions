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
        ll a, b;
        cin >> a >> b;
        ll c = a / 2;
        ll d = b / 2;
        ll cnt;
        if (c > d)
        {
            cnt = d;
            a = a - (2 * d);
            b = b % 2;
        }
        else
        {
            cnt = c;
            a = a % 2;
            b = b - (2 * c);
        }
        if (a > b)
        {
            ll m = min(a / 3, b);
            cnt += m;
        }
        else
        {
            ll m = min(a, b / 3);
            cnt += m;
        }
        cout << cnt << "\n";
    }
}
