// HHM
//  DATE: 09-07-2022
// TIME:18:02:02

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
    string s, r;
    cin >> s >> r;
    ll cnt = 0;
    char temp = r[0];
    string r1 = "", s1 = "";
    vector<ll> v, v1;
    for (i = 0; i < r.size(); i++)
    {
        if (temp == r[i])
            cnt++;
        else
        {
            v1.pb(cnt);
            temp = r[i];
            cnt = 1;
        }
        if (cnt < 3)
            r1 += temp;
    }
    v1.pb(cnt);
    temp = s[0];
    cnt = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (temp == s[i])
            cnt++;
        else
        {
            v.pb(cnt);
            temp = s[i];
            cnt = 1;
        }
        if (cnt < 3)
            s1 += temp;
    }
    v.pb(cnt);
    if (s1 == r1)
    {
        for (i = 0; i < v.size(); i++)
        {
            if (v1[i] < v[i])
            {
                cout << "No";
                return;
            }
        }
        cout << "Yes";
    }
    else
        cout << "No";
    // cout<<r1<<"\n"<<s1;
    // cout << r1;
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
