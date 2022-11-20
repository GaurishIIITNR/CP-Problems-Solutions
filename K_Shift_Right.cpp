#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void shri()
{
    ll a, b, c;
    cin >> a >> b;
    ll rem = b % a;
    vector<ll> v(a, 0);
    for (ll i = 0; i < a; i++)
    {
        cin >> c;
        if (i + rem < a)
            v[i + rem] = c;
        else
            v[(i + rem) - a] = c;
    }
    for (ll i = 0; i < a; i++)
    {
        cout << v[i];
        if (i != a - 1)
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
        shri();
    }
}
