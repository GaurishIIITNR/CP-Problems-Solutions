//=======================================================//
// HAR HAR MAHADEV
// DATE: 22-04-2022
// TIME:20:06:52
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
    string s;
    cin >> s;
    ll cnta = 0, cntb = 0;
    ll flag = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            cnta++;
            if (i + 1 < s.length() && s[i + 1] == 'b')
            {
                if (cnta < 2)
                {
                    cout << "NO\n";
                    return;
                }
                cnta = 0;
            }
            if (i == s.length() - 1)
            {

                if (cnta < 2)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
        else
        {
            cntb++;
            if (i + 1 < s.length() && s[i + 1] == 'a')
            {
                if (cntb < 2)
                {
                    cout << "NO\n";
                    return;
                }
                cntb = 0;
            }
            if (i == s.length() - 1)
            {

                if (cntb < 2)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";

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