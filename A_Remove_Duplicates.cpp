/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 25-02-2022**** //
                            // ******TIME:13:37:27****** //
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

void gaurish()
{
    ll i, j, k;
    ll a;
    cin >> a;
    ll d = a;
    vec(ll, input);
    st(ll, sat);
    while (a--)
    {
        ll b;
        cin >> b;
        input.pb(b);
    }
    //    reverse(all(input));
    foi(i, 0, d, 1)
    {
        fod(j, i - 1, 0, 1)
        {
            if (input[i] == input[j])
                input[j] = -2;
        }
    }
    ll cnt = 0;
    for (auto x : input)
    {
        if (x != -2)
            cnt++;
    }
    cout << cnt << "\n";
    for (auto x : input)
    {
        if (x != -2)
            cout << x << " ";
    }

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
