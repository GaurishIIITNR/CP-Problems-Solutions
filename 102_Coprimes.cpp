/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 17-03-2022**** //
                            // ******TIME:10:05:16****** //
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

ll gcd(ll a, ll b)
{
    if (a > b)
        swap(a, b);
    ll rem;
    while (1)
    {
        rem = b % a;
        b = a;
        a = rem;
        if (rem == 0)
            return b;
    }
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
    // cin>>t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (gcd(n, i) == 1)
                cnt++;
        }
        cout << cnt;
    }
}
