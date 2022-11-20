//🚩HHM🚩
// DATE: 22-06-2022
// TIME:22:01:25

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
// set<ll>st;
// map<ll,ll>mp;
// string s;cin>>s;

void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v(n, 0), sm, s(n, 0);
    vin(v, n);
    sort(all(v));
    ll r = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] < n)
            s[v[i]]++;
        r += v[i];
        sm.pb(r);
    }
    // deb(r);
    // vout(v);
    //  vout(sm);
    // vout(s);
    for (i = 0; i < n; i++)
    {
        ll mn = 0, mx = 0;
        ll low = 0, high = v.size() - 1, tar = i;
        while (low < high)
        {
            ll mid = low + (high - low) / 2;
            if (v[mid] <tar)
                low = mid + 1;
            else
                high = mid;
            // if (x > i)
            // {
            //     mn += 1;
            //     mx += (n - x) + 1;
            // }
            // else if (x < i)
            // {
            //     mx += (n - x);
            // }
        }
        mn=n-low-s[i];
        if(low!=0){
            mx+=(low*n)-sm[low-1];
        }
        if(low!=n-1){
            mx+=((n-low-s[i])*n)-(r-sm[low]+v[low])-(s[i]*i)+(n-low-s[i]);
        }
        cout << mn << " " << mx << "\n";
    }
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
