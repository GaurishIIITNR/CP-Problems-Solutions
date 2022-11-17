// हर हर महादेव
#define F first
#define S second
#define dbl double
using namespace std;
#define pb push_back
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
ll dp[501][501];
ll f(vector<ll> &cor, vector<ll> &cost, ll st, ll end, ll k)
{
    // Base
    if (end == cost.size())
        return cost[st] * (cor[end] - cor[st]);
    if (dp[end][k] != -1)
        return dp[end][k];
    // Recursive
    ll p = cost[st] * (cor[end] - cor[st]) + f(cor, cost, end, end + 1, k);
    if (k > 0)
        return dp[end][k] = min(p, f(cor, cost, st, end + 1, k--));
    else
        return dp[end][k] = p;
}
void HHM()
{
    memset(dp, -1, sizeof(dp));
    ll i, j, k;
    ll n, l;
    cin >> n >> l >> k;
    vector<ll> cor, cost;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        cor.pb(d);
    }
    cor.pb(l);
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        cost.pb(d);
    }
    cout << f(cor, cost, 0, 1, k) << "\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
