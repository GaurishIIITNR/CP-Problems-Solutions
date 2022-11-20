// DATE: 30-03-2022
// TIME:21:40:55
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
    string s;
    cin >> s;
    ll res = 0;
    vp(ll, ll, v);
    foi(i, 0, n, 1)
    {
        if (s[i] == '0' && i == 0)
        {
            for (j = i; j < n; j++)
            {
                if (s[j] == '0')
                    i++;
                else
                    break;
            }
            v.pb({1, i});
            res++;
        }
        else if (s[i] == '0')
        {
            v.pb({1, i});
            res++;
            for (j = i; j < n; j++)
            {
                if (s[j] == '0')
                    i++;
                else
                    break;
            }
            v.pb({1, i});
            res++;
        }
    }
    cout << res << "\n";
    for (auto x : v)
    {
        cout << x.first << " " << x.second << "\n";
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
    cin >> t;

    while (t--)
    {
        gaurish();
    }
}
