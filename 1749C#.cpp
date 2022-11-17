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
    vector<ll> v(n, 0);
    vin(v, n);
    sort(all(v));
    for (i = n; i >= 0; i--)
    {
        bool flag = 0;
        vector<ll> v1 = v;
        for (j = 1; j <= i; j++)
        {
            bool f = 0;
            for (k = v1.size() - 1; k >= 0; k--)
            {
                if (i - j + 1 >= v1[k])
                {
                    v1.erase(v1.begin() + k);
                    v1.push_back(i - j + 1);
                    f = 1;
                    break;
                }
            }
            if (!f)
                flag = 1;
        }
        if (flag)
            continue;
        else
        {
            cout << i << "\n";
            break;
        }
    }

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
