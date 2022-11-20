#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    ll a;
    cin >> t >> a;
    ll cnt = 0;
    vector<ll> v(a + 1);
    while (t--)
    {
        string s;
        cin >> s;
        ll flag = 1;
        for ( ll i = 0; i <= a; i++)
        {
            ll count = 0;
            for (ll j = 0; j < s.length(); j++)
            {
                if ((ll)(s[j] - '0') == i)
                    count += 1;
            }
            if (count < 1)
            {
                flag = 2;
                break;
            }
        }
        if (flag == 1)
            cnt += 1;
    }
    cout << cnt;
}
