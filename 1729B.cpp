// HHM // DATE: 12-09-2022 // TIME:20:22:19
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define dbl double
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl

ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
// set<ll>st;
// map<ll,ll>mp;
// string s;cin>>s;
// vector<ll>v(n,0);
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string res = "";
    for (i = 0; i < n; i++)
    {
        if ((i + 2) < n && s[i + 2] == '0')
        {
            if (i + 3 < n && s[i + 3] == '0')
            {
                res += (char)(s[i] - '0' - 1 + 'a');
            }
            else
            {
                res += (char)('a' + ((10 * (s[i] - '0')) + s[i + 1] - '0' - 1));
                i += 2;
            }
        }
        else
            res += (char)(s[i] - '0' - 1 + 'a');
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
        // cout << "Case #" << t << ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

//  ~ GaurishOjha