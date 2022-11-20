//=======================================================//
// HAR HAR MAHADEV
// DATE: 04-05-2022
// TIME:22:01:19
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
    ll n;
    cin >> n;
    vec(ll, od);
    vec(ll, ev);
    ll sm = 0;
    ll odm = 0, evm = -1;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        sm += d;
        if (d % 2)
            od.pb(d);
        else
            ev.pb(d);
    }
    bool flag = 1;
    for (auto x : od)
    {
        for (auto y : ev)
        {
            if (((n / 2) * x) + (((n / 2) * y)) == sm)
            {
                odm = x;
                evm = y;
                flag = 0;
                break;
            }
        }
        if (!flag)
            break;
    }
    if (odm == 0)
    {
        cout << "NO\n";
        return;
    }
    ll cnt = 0, cnt1 = 0;
    for (auto x : od)
        cnt = cnt + (odm - x);

    for (auto x : ev)
        cnt1 = cnt1 + (evm - x);
    if ((cnt1 + cnt == 0) && cnt1 % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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
