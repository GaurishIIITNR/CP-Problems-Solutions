#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
         vector<ll> v(a);
        for (ll i = 0; i < a; i++)
            cin >> v[i];
        while (b--)
        {
            ll c;
            cin >> c;
            ll low = 0;
            ll high = a - 1;
            bool flag = true;
            while (low <= high)
            {
                ll mid = (low + high) / 2;
                if (v[mid] == c)
                {
                    cout << "YES\n";
                    flag = false;
                    break;
                }
                else if (v[mid] < c)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            if (flag)
                cout << "NO\n";
        }
    }
}
