// HHM
//  DATE: 03-08-2022
// TIME:21:57:00

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
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
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626
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
    vector<ll> v;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
    }
    ll res = 0;
    // ll prev = -5;
    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    if (n == 2)
    {
        if (__gcd(v[0], v[1]) == 1)
        {
            cout << 2 << "\n";
            return;
        }
        else
        {
            cout << 3 << "\n";
            return;
        }
    }
    for (i = 1; i < n - 1; i++)
    {
        if (__gcd(v[i], v[i + 1]) == 1 && __gcd(v[i], v[i - 1]) == 1)
        {
            res += 1;
            res %= 1000000007;
            continue;
        }
        else
        {
            if (__gcd(v[i] + 1, v[i + 1]) == 1 && __gcd(v[i] + 1, v[i - 1]) == 1)
            {
                res += 2;
                res %= 1000000007;
                // prev = i;
            }
            else if (__gcd(v[i] - 1, v[i + 1]) == 1 && __gcd(v[i] - 1, v[i - 1]) == 1)
            {
                res += 2;
                res %= 1000000007;
                // prev = i;
            }
            else
            {
                res += 4;
                res %= 1000000007;
                // prev = i;
            }
        }
    }
    res += 2;
    res %= 1000000007;
    cout << res << "\n";
    // set<ll>st;
    // map<ll,ll>mp;
    // string s;cin>>s;
    // vector<ll>v(n,0);

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    // ll tt=1;
    while (t--)
    {
        // cout << "Case #" << tt << ": ";
        HHM();
        // tt++;;
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
