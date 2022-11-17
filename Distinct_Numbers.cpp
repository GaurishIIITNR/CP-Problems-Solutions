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
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n >> k;
    vector<ll> v;
    map<ll, bool> mp;
    vector<ll> tmp;
    ll mx = INT_MIN;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        mx = max(mx, d);
        mp[d] = 1;
    }
    for (i = 1; i <= (2 * n); i++)
    {
        if (!mp[i])
            tmp.pb(i);
    }
    ll l = 0, res = 0;
    ll mx1=mx;
    for (i = 0; i < k; i++)
    {
        if (mx < tmp[l])
        {
            mx = tmp[tmp.size() - 1];
            continue;
        }
        else
            res += mx - tmp[l];
        l++;
    }
    l = 0;
    ll res1 = 0;
    for (i = 0; i < k; i++)
    {
        if ((!i) && mx1 != tmp[tmp.size() - 1])
        {
            mx1 = tmp[tmp.size() - 1];
            continue;
        }
        else
            res1 += (mx1 - tmp[l]);
        l++;
    }
    cout << max(res, res1) << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" << t << ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
