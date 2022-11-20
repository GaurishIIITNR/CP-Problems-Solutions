#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void dn()
{
    ll n, a;
    cin >> n;
    set<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        v.insert(a);
    }
    cout << v.size();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;

    while (t--)
    {
        dn();
    }
}
