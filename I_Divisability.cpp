#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll changea(ll a ,ll x)
{
    if (a % x == 0)
        return a;
    return (a + (x-(a % x)));
}
ll chan(ll b,ll x)
{
    if (b % x == 0)
        return b;
    return (b - (b % x));
}
ll sum(ll a, ll b, ll x)
{
    ll n = ((b - a) / (x)) + 1;
    return (n * ((2 * a) + (n - 1) * x) / 2);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a > b)
            swap(a, b);
        a = changea(a,c);
        b = chan(b,c);
        cout << sum(a, b, c);
    }
}
