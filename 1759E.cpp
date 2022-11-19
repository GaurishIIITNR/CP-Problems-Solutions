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
#define vvin(name, rowss, colmn)    \
    for (i = 0; i < rowss; i++)     \
    {                               \
        for (j = 0; j < colmn, j++) \
            cin >> name[i][j];      \
    }
#define vvout(name, rowss, colmn)      \
    for (i = 0; i < rowss; i++)        \
    {                                  \
        for (j = 0; j < colmn, j++)    \
            cout << name[i][j] << " "; \
        cout << endl;                  \
    }
#include <bits/stdc++.h>
#define ll long long int
void dfs(vector<ll> adj[], ll node, vector<bool> &vis)
{
    vis[node] = 1;
    for (auto x : adj[node])
        if (!vis[x])
            dfs(adj, x, vis);
}
// ll dream[200002][3][2];
ll mod = 1000000007;
#define all(x) x.begin(), x.end()
#define mem memset(dream, -1, sizeof(dream))
#define Pi 3.1415926535897932384626
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
ll f(vector<ll> &v, ll i, ll g, ll bl, ll k)
{
    if (i == v.size())
        return 0;
    if (g == 0 && bl == 0 && k <= v[i])
        return 0;
    // if (dream[i][g][bl] != -1)
    //     dream[i][g][bl];
    ll p = INT_MIN, p4 = INT_MIN, p5 = INT_MIN;
    if (k > v[i])
        p = 1 + f(v, i + 1, g, bl, k + (v[i] / 2));
    else
    {
        if (bl > 0)
            p4 = f(v, i, g, bl - 1, (k * 3));
        if (g > 0)
            p5 = f(v, i, g - 1, bl, (k * 2));
    }
    return max(p, max(p4, p5));
}
void HHM()
{
    // memset(dream, -1, sizeof(dream));
    ll i, j, k;
    ll n;
    cin >> n >> k;
    vector<ll> v;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
    }
    sort(all(v));
    ll p = f(v, 0, 2, 1, k);
    if (p == INT_MIN)
        p = 0;
    cout << p << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// if (k <= v[i] && (k * 2) > v[i] && g > 0)
// {
//     k *= 2;
//     k += v[i] / 2;
//     g--, res++;
// }
// if (k <= v[i] && (k * 3) > v[i] && bl > 0)
// {
//     k *= 3;
//     k += v[i] / 2;
//     bl--, res++;
// }
// if (k <= v[i] && (k * 4) > v[i] && g > 1)
// {
//     k *= 4;
//     k += v[i] / 2;
//     g -= 2, res++;
// }
// if (k <= v[i] && (k * 6) > v[i] && bl > 0 && g > 0)
// {
//     k *= 6;
//     k += v[i] / 2;
//     bl--, g--;
//     res++;
// }
// if (k <= v[i] && (k * 12) > v[i] && bl > 0 && g > 2)
// {
//     k *= 12;
//     k += v[i] / 2;
//     bl--, g -= 2;
//     res++;
// }