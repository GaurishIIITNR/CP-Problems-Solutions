#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void sz()
{
    ll a, b;
    cin >> a;
    vector<ll> v(a, 0);
    ll cnt = 0;
    for (ll i = 0; i < a; i++)
    {
        cin >> b;
        if (b == 0)
            cnt += 1;
        else
            v[i - cnt] = b;
    }
    for (ll j = 0; j < a; j++)
    {
        cout << v[j];
        if (j != a - 1)
            cout << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;

    while (t--)
    {
        sz();
    }
}
