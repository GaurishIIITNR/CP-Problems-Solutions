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
    string s;
    cin >> s;
    string res = "";
    for (i = n - 1; i >= 0; i--)
    {
        string temp = "";
        ll h = i;
        for (j = n - 1; j >= 0; j--)
        {
            if (h >= 0)
            {
                if (s[j] == '1' || s[h] == '1')
                    temp = '1' + temp;
                else
                    temp = '0' + temp;
            }
            else
                temp = s[j] + temp;
            h--;
        }
        string r = "";
        bool f = 0;
        for (auto x : temp)
        {
            if (x == '0' && f == 0)
                continue;
            else
            {
                f = 1;
                r += x;
            }
        }
        res = max(res, r);
    }
    if (res == "")
        res = "0";
    cout << res << "\n";
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
