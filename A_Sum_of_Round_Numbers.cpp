//=======================================================//
// HAR HAR MAHADEV
// DATE: 20-04-2022
// TIME:11:43:58
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
    if (s.length() == 1)
        cout << 1 << "\n"
             << s << "\n";
    else
    {
        for (i = 1; i < s.length(); i++)
        {
            if (s[i] != '0')
                break;
        }
        if (i == s.length())
            cout << 1 << "\n"
                 << s << "\n";
        else
        {
            ll cnt = 0;
            for (i = 0; i < s.length(); i++)
            {
                if (s[i] != '0')
                    cnt++;
            }
            cout << cnt << "\n";
            for (i = 0; i < s.length(); i++)
            {
                if (s[i] != '0')
                {
                    cout << s[i];
                    for (j = i + 1; j < s.length(); j++)
                        cout << 0;
                    cout << " ";
                }
            }
            cout << "\n";
        }
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
