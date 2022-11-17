// HHM
//  DATE: 03-09-2022
// TIME:23:31:02

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
    // cin >> n;
    string s;
    cin >> s;
    n = s.length();
    ll l = 0;
    ll v1 = 0, v2 = 0, v3 = 0;
    ll mn = INT_MAX;
    ll res = 0;
    set<char> st;
    for (i = 0; i < n; i++)
    {
        st.insert(s[i]);
        if (s[i] == '1')
            v1++;
        else if (s[i] == '2')
            v2++;
        else
            v3++;
        res++;
        while (v1 && v2 && v3 && l < n)
        {
            mn = min(res, mn);
            if (s[l] == '1')
                v1--;
            else if (s[l] == '2')
                v2--;
            else
                v3--;
            res--;
            // mn = min(res, mn);
            l++;
        }
    }
    if (st.size() != 3)
    {
        cout << 0 << "\n";
        return;
    }
    cout << mn << "\n";
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