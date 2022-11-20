#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    vector<ll> v(t);
    ll flag = 1, flaag = 1;
    for (ll j = 0; j < t; j++)
    {
        ll a, b;
        cin >> a >> b;
        v[j] = a;
        if (a != b)
        {
            flag = 2;
            flaag = 2;
            cout << "rated";
            break;
        }
    }
    if (flag == 1)
    {
        for (ll i = 0; i < t - 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                flaag = 2;
                cout << "unrated";
                break;
            }
        }
    }
    if (flaag == 1)
        cout << "maybe";
}
