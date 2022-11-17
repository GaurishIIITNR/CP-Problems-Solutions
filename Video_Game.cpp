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
    vector<ll> v(n, 0);
    vin(v, n);
    ll tmp = 0, val = 0;
    while (1)
    {
        ll d;
        cin >> d;
        if (d == 0)
            break;
        if (d == 1)
        {
            if (tmp == 0)
                continue;
            else
                tmp--;
        }
        else if (d == 2)
        {
            if (tmp == n - 1)
                continue;
            else
                tmp++;
        }
        else if (d == 3)
        {
            if (val == 1 || v[tmp] == 0)
                continue;
            else
            {
                val++;
                v[tmp]--;
            }
        }
        else
        {
            if (val == 0 || v[tmp] > k)
                continue;
            else
            {
                val--;
                v[tmp]++;
            }
        }
    }
    vout(v);

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
