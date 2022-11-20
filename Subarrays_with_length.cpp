#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tc;
    cin >> tc;
    ll cnt = 0;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> mohit(n);
        ll cnt = 0, r = 0;
        for (ll i = 0; i < n; i++)
            cin >> mohit[i];
        for (ll i = 0; i < n; i++)
        {
            ll low = 0, high = n - 1;
            if (i - mohit[i] + 1 >= 0)
                low = i - mohit[i] + 1;
            if (i + mohit[i] - 1 <= n - 1)
                high = i + mohit[i] - 1;
            cout<<low<<" "<<high<<"\n";
            if (high - low + 1 < mohit[i])
                continue;
            else
            {
                cnt += high - low + 2 - mohit[i];
                cout<<cnt<<"\n";
                for (ll j = low; j <= high; j++)
                    if (i!=j && mohit[j] == mohit[i])
                    {
                        cnt--;
                        r++;
                    }
                 cout<<r<<"\n";
            }
        }
        cout << cnt + r / 2 << "\n";
        cout<<"\n";
    }
}