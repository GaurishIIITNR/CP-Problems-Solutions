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
        string s;
        cin >> a >> b >> s;
        ll cnt = 0;
        for (ll i = 0; i < a; i++)
        {
            if (s[i] != s[a - i - 1])
                cnt = cnt + 1;
        }
        ll h = (cnt / 2);
        if (h > b)
            cout << "NO\n";
        else if (b > h && a % 2 == 0 && (b - h) % 2 != 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

}
