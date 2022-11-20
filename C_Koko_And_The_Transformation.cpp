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
        ll sm1 = 0, sm2 = 0;
        for (ll i = 0; i < a; i++)
        {
            ll c;
            cin >> c;
            sm1 += c;
        }
        for (ll i = 0; i < b; i++)
        {
            ll c;
            cin >> c;
            sm2 += c;
        }
        if (sm1 == sm2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
