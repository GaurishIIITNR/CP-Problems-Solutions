// DATE: 30-03-2022
// TIME:10:26:22
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
    ll bs = 0, br = 0, cnt = 0;
    ll tbs = 0, tbr = 0;
    for (auto x : s)
    {
        if (x == '(')
        {
            bs++;
            tbs++;
        }
        else
        {
            br++;
            tbr++;
            if (br == bs)
            {
                br = 0;
                bs = 0;
            }
            else if (bs < br)
            {
                cnt++;
                br--;
            }
        }
    }
    cout << cnt + abs(tbr - tbs) << "\n";
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