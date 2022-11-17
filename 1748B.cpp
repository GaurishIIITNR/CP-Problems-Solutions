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
// ll dream[];
#define all(x) x.begin(), x.end()
#define mem memset(dream, -1, sizeof(dream))
#define Pi 3.1415926535897932384626
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
void HHM()
{
    // mem;
    ll i, j, k;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<ll, ll> mp;
    ll l = 0, res = 0, cnt = 1;
    vector<ll> p;
    for (i = 0; i < s.length(); i++)
    {
        if (i - 1 >= 0 && s[i] == s[i - 1])
            cnt++;
        else
        {
            if (cnt > 1)
                p.pb(cnt);
            cnt = 1;
        }
        mp[s[i]]++;
        if (mp[s[i]] > mp.size())
        {
            if (i - 1 >= 0 && s[i] == s[i - 1])
                cnt--;
            if (cnt > 1)
            {
                p.pb(cnt);
                cnt = 1;
            }
            while (l < i)
            {
                if (s[i] == s[l])
                {
                    l++;
                    mp[s[i]]--;
                    if (mp[s[i]] == 0)
                        mp.erase(s[i]);
                    break;
                }
                l++;
            }
        }
        res += i - l + 1;
    }
    // deb(res);
    if (cnt > 1)
        p.pb(cnt);
    // if (p.size() == 0)
    //     cout << "***\n";
    // else
    //     vout(p);
    for (auto x : p)
    {
        res -= (x * (x + 1)) / 2;
        res += x;
    }
    cout << res << "\n";

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
