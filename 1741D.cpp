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
    cin >> n;
    ll tmp = 1;
    ll cnt = 0;
    vector<ll> v(n, 0);
    vin(v, n);
    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }
    for (i = 0; i < n; i += 2)
    {
        if (abs(v[i] - v[i + 1]) != 1)
        {
            cout << -1 << "\n";
            return;
        }
        else if (v[i] > v[i + 1])
        {
            swap(v[i], v[i + 1]);
            cnt++;
        }
    }
    tmp = 4;
    while (tmp <= n)
    {
        ll low = (tmp / 2) - 1;
        for (i = (tmp - 1); i < n; i += tmp)
        {
            if (abs(v[low] - v[i]) != (tmp / 2))
            {
                cout << -1 << "\n";
                return;
            }
            if (v[low] > v[i])
            {
                cnt++;
                swap(v[low], v[i]);
            }
            low += tmp;
        }
        tmp *= 2;
    }
    cout << cnt << "\n";
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
