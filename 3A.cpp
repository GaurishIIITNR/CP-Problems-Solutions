// HHM
//  DATE: 06-07-2022
// TIME:10:02:56

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
    // ll n;
    // cin >> n;
    map<ll, char> x;
    map<ll, char> y;
    x[-1] = 'R', x[1] = 'L';
    y[-1] = 'U', y[1] = 'D';
    // y[0] ='', x[0] ='';
    string s1, s2;
    cin >> s1 >> s2;
    ll x1 = s1[0] - 'a' + 1, x2 = s2[0] - 'a' + 1, y1 = s1[1] - '0', y2 = s2[1] - '0';
    ll r1 = x2 - x1, r2 = y2 - y1;
    vector<string> v;
    while (r1 != 0 || r2 != 0)
    {
        string s = "";
        if (r1 < 0)
        {
            s += x[1];
            r1++;
        }
        else if (r1 > 0)
        {
            s += x[-1];
            r1--;
        }
        if (r2 < 0)
        {
            s += y[1];
            r2++;
        }
        else if (r2 > 0)
        {
            s += y[-1];
            r2--;
        }
        v.pb(s);
    }
    cout << v.size() << "\n";
    for (auto x : v)
        cout << x << "\n";
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
    // cin >> t;
    //  ll tt=1;
    while (t--)
    {
        // cout << "Case #" << tt << ": ";
        HHM();
        // tt++;;
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);