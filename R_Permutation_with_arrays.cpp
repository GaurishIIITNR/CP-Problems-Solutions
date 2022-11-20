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
        ll a;
        cin >> a;
        vector<ll> v1(a);
        vector<ll> v2(a);
        for (ll i = 0; i < a; i++)
            cin >> v1[i];
        for (ll i = 0; i < a; i++)
            cin >> v2[i];

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int flag = 1;
        for (ll i = 0; i < a; i++)
        {
            if (v1[i] != v2[i])
            {
                flag = 2;
                cout << "no\n";
                break;
            }
        }
        if (flag == 1)
            cout << "yes\n";
    }
}
