//=======================================================//
// HAR HAR MAHADEV
// DATE: 22-04-2022
// TIME:00:43:07
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
    ll i, j;
    ll n;
    cin >> n;
    vec(ll, v);
    vec(ll, v1);
    ll n1 = n;
    while (n1--)
    {
        ll d;
        cin >> d;
        v.pb(d);
    }
    v1 = v;
    reverse(all(v1));
    vec(ll, res);
    res.pb(0);
    ll sm1 = 0, sm2 = 0;
    ll k = 0;
    for (i = 0; i < n; i++)
    {
        sm1 += v[i];
        if (sm1 < sm2 && (i + j + 2) <= n)
            continue;
        else if ((sm1 == sm2) && (i + j + 2) <= n)
        {
            res.pb(i + j + 2);
            continue;
        }
        for (j = k; j < n; j++)
        {
            sm2 += v1[j];
            // deb(sm1);
            // deb(sm2);
            if (i + j + 2 > n)
                break;
            else if ((sm1 == sm2) && (i + j + 2) <= n)
            {
                res.pb(i + j + 2);
                break;
            }
            else if ((sm1 < sm2) && (i + j + 2) <= n)
                break;
        }
        if (i + j + 2 > n)
            break;
        k = j + 1;
    }
    ll mx = 0;
    for (auto x : res)
    {
        mx = max(mx, x);
    }
    cout << mx << "\n";
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
