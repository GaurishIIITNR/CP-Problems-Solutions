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
        ll mn = INT_MAX;
        for (ll i = 0; i < a; i++)
        {
            ll d;
            cin >> d;
            if (mn > d)
                mn = d;
            if (a % b == 0)
            {
                if ((i + 1) % b == 0)
                {
                    cout << mn << " ";
                    mn = INT_MAX;
                }
            }
            else
            {
                if (i == a - 1)
                    cout << mn << " ";
                else if ((i + 1) % b == 0)
                {
                    cout << mn << " ";
                    mn = INT_MAX;
                }
            }
        }
    }
}
