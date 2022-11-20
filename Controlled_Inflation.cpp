//=======================================================//
// HAR HAR MAHADEV
// DATE: 24-04-2022
// TIME:23:23:26
//=======================================================//
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j, k;
    ll n, p;
    cin >> n >> p;
    ll res = 0;
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        vec(ll, v)(p);
        if (i == 0)
        {
            ll mx = 0;
            for (ll j = 0; j < p; j++)
            {
                cin >> v[j];
                mx = max(mx, v[j]);
            }
            res = mx;
            temp = mx;
        }
        else
        {
            ll mx = 0, mn = INT_MAX;
            for (ll j = 0; j < p; j++)
            {
                cin >> v[j];
                mx = max(mx, v[j]);
                mn = min(mn, v[j]);
            }
            ll mn1;
            if (abs(mx - temp) >= abs(mn - temp))
            {
                mn1 = abs(mn - temp);
                temp = mx;
            }
            else
            {
                mn1 = abs(mx - temp);
                temp = mn;
            }
            res += mn1;
            res += abs(mx - mn);
        }
    }
    cout << res << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    ll t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        cout << "Case #" << tc << ": ";
        gaurish();
    }
}
