// HAR HAR MAHADEV
// DATE: 08-04-2022
// TIME:21:57:24
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
//#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j, k;
    ll n;
    cin >> n;
    ll mx = 0;
    mpp(ll, ll, mp);
    foi(i, 0, n, 1)
    {
        ll d;
        cin >> d;
        mp[d]++;
        if (mp[d] > mx)
        {
            mx = mp[d];
        }
    }
    // cout << mx << "\n";
    ll cnt = 0;
    n = n - mx;
    i = 0;
    while (n > 0)
    {
        cnt++;
        if (i != 0)
            mx *= 2;
        cnt += mx;
        n -= mx;
        i++;
    }
    cout << cnt + n << "\n";
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

    while (t--)
    {
        gaurish();
    }
}
