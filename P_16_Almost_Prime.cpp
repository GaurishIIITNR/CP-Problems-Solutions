/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 14-03-2022**** //
                            // ******TIME:14:39:04****** //
========================================================================================
*/
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/

    mpp(ll, ll, mep);
    for (ll i = 2; i <= 3000; i++)
    {
        mep[i] = 1;
    }
    for (ll i = 2; i <= 3000; i++)
    {
        for (ll j = i * i; j <= 3000; j += i)
        {
            mep.erase(j);
        }
    }
    // for (auto x : mep)
    //     cout << x.first << "\n";

    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        for (ll i = 4; i <= n; i++)
        {
            if (mep[i] == 1)
                continue;
            else
            {
                ll cn = 0;
                for (ll j = 1; j <= i; j ++)
                {
                    if (i%j==0 && mep[j] == 1)
                        cn++;
                }
                if (cn == 2)
                    cnt++;
            }
        }
        cout << cnt << "\n";
    }
}
