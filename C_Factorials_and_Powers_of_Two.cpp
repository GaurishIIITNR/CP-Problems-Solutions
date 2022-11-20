/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 04-03-2022**** //
                            // ******TIME:22:24:14****** //
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
#define erase(name, i) name.erase(name.begin() + i)
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
ll cnt(ll n)
{
    ll cnt = 0;
    while (n > 0)
    {
        if (n % 2)
            cnt++;
        n = n / 2;
    }
    return cnt;
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
    vec(ll, v);
    ll i = 1;
    ll d = 1;
    while (1)
    {
        if (d * i <= 1000000000000)
            v.pb(d * i);
        else
            break;
        d = d * i;
        i++;
    }
    sort(all(v));
    // cout<<v.size()<<"\n";
    // deb(cnt(11));
    while (t--)
    {
        ll res = INT_MAX;
        ll n, sm = 0, cn = 0;
        cin >> n;
        for (int i = 0; i < 14; i++)
        {
            if (v[i] == n)
            {
                res = 1;
                break;
            }
            else if (n == pow(2, log2(n)) && n != 0)
            {
                res = 1;
                break;
            }
            else if (v[i] > n)
            {
                for (ll j = i - 1; j >= 0; j--)
                {
                    sm += v[j];
                    cn++;
                    if ((n - sm) >= 0)
                        res = min(res, (cn + cnt(n - sm)));
                }
                break;
            }
        }
        if (res == INT_MAX)
        {
            res = -1;
            break;
        }
        cout << res << "\n";
    }
}
