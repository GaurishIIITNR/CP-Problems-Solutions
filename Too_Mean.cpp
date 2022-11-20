//=======================================================//
// HAR HAR MAHADEV
// DATE: 04-05-2022
// TIME:21:04:25
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
    dbl sm = 0.0;
    vec(ll, v)(n);
    foi(i, 0, n, 1)
    {
        cin >> v[i];
        sm += v[i];
    }
    dbl avg = sm / (dbl)n;
    ll cnt = 0;
    dbl sm1 = 0.0, sm2 = 0.0;
    for (i = 0; i < n; i++)
    {
        if (v[i] > avg)
            sm2 += v[i];
        else
        {
            sm1 += v[i];
            cnt++;
        }
    }
    printf("%.12f\n", ((sm1 / (dbl)cnt) + sm2) / (dbl)(n - cnt + 1));

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





