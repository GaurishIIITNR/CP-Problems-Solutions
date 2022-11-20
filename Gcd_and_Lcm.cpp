//🚩HHM🚩
// DATE: 26-06-2022
// TIME:00:40:06

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
ll lcm(ll x, ll y)
{
    return (x * y) / __gcd(x, y);
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    // set<ll>st;
    // map<ll,ll>mp;
    // string s;cin>>s;
    // vector<ll>v(n,0);
    ll cnt = 0;
    for (i = 1; i * i <= n; i++)
    {
        for (j = i; (i * i) + (j * j) + (lcm(i, j) * lcm(i, j)) + (__gcd(i, j) * __gcd(i, j)) <= n; j++)
        {
            ll g = __gcd(i, j);
            ll l = lcm(i, j);
            if ((i * i) + (j * j) + (l * l) + (g * g) == n)
            {
                if (i == j)
                    cnt++;
                else
                    cnt += 2;
            }
        }
    }
    cout << cnt << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
