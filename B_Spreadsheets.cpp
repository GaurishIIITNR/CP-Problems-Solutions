//=======================================================//
// HAR HAR MAHADEV
// DATE: 22-04-2022
// TIME:14:37:51
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

ll power(ll n, ll k)
{
    ll res = 1;
    for (ll i = 1; i <= k; i++)
    {
        res *= n;
    }
    return res;
}
void gaurish()
{
    ll i, j, k;
    string s;
    cin >> s;
    if (s[0] != 'R')
    {
        string tmp = "", dig = "";
        for (auto x : s)
        {
            if (isalpha(x))
                tmp += x;
            else
                dig += x;
        }
        cout << "R" << dig;
        ll res = 0;
        ll n = tmp.size() - 1;
        for (auto x : tmp)
        {
            res += ((ll)(x - 'A') + 1) * power(26, n);
            n--;
        }
        cout << "C" << res << "\n";
    }
    else
    {
        string tmp1 = "", dig1 = "", tmp2 = "", dig2 = "";
        ll flag = 0;
        for (auto x : s)
        {
            if (isalpha(x) && flag == 0)
                tmp1 += x;
            else if (!isalpha(x) && flag == 2)
                dig2 += x;
            else if (!isalpha(x))
            {
                dig1 += x;
                flag = 1;
            }
            else if (isalpha(x) && flag)
            {
                tmp2 += x;
                flag = 2;
            }
        }
        if ((tmp1 == "R" && tmp2 == "C") || (tmp1 == "C" && tmp2 == "R"))
        {
            ll d = stol(dig2);
            string re = "";
            while (d > 0)
            {
                ll rem = d % 26;
                d = d / 26;
                if (rem == 0)
                {
                    rem = 26;
                    d--;
                }
                re = char(64 + rem) + re;
            }
            cout << re;
            cout << dig1 << "\n";
        }
        // cout << tmp1 << "\n"
        //      << tmp2 << "\n"
        //      << dig1 << "\n"
        //      << dig2 << "\n";
        else
        {
            cout << "R" << dig1;
            ll res = 0;
            ll n = tmp1.size() - 1;
            for (auto x : tmp1)
            {
                res += ((ll)(x - 'A') + 1) * power(26, n);
                n--;
            }
            cout << "C" << res << "\n";
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
