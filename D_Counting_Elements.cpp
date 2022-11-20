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
        ll a;
        cin >> a;
        vector<ll> v(1001, 0);
        for (int i = 0; i < a; i++)
        {
            ll b;
            cin >> b;
            v[b] += 1;
        }
        ll cnt = 0;
        for (int i = 0; i <= 999; i++)
           { if (v[i]>0 && v[i+1]>0)
            cnt += v[i];
            }

        cout << cnt;
    }
}
