/*
========================================================================================
                               // ****  ***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 24-02-2022**** //
                            // ******TIME:21:03:07****** //
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
#define pb push_back
//#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll a, i, j, k;
    cin >> a;
    vec(ll, v)(a);
    foi(i, 0, a, 1)
            cin >>
        v[i];
    map<ll, ll> mp;
    vec(ll, res);
    foi(i, 0, a, 1)
    {
        foi(j, 0, a, 1)
        {
            if ((v[i]%3==0&&v[i] / 3 == v[j] )|| v[i] * 2 == v[j])
                mp[v[i]] = v[j];
        }
    }
    ll tec;
    for (auto x : v)
    {
        if (mp[x] == 0)
            tec = x;
    }
    //deb(tec);
    res.pb(tec);
    ll d = a - 1;
    while (d--)
    {

         if(mp[tec*3] != 0)
        {
            res.pb(tec * 3);
            tec = tec * 3;
        }
        else
        {
            res.pb(tec / 2);
            tec = tec / 2;
        }
       
    }
    reverse(all(res));
    for (auto x : res)
        cout << x << " ";
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
    // cin>>t;

    while (t--)
    {
        gaurish();
    }
}