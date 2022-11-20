#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;
        ll cnt = 0;
        ll x, y;
        if (a.length() != b.length())
        {
            cout << "NO\n";
            return 0;
        }
        for (ll i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                cnt += 1;
                if (cnt == 1)
                    x = i;
                else if (cnt == 2)
                    y = i;
                else
                {
                    cout << "NO\n";
                    return 0;
                }
            }
        }
        if (cnt == 2)
        {
            if (a[x] == b[y] && b[x] == a[y])
            {
                cout << "YES\n";
                return 0;
            }
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
        else
            cout << "NO\n";
    }
}

