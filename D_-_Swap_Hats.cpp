/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 20-03-2022**** //
                            // ******TIME:18:22:19****** //
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
    char s[3];
    char t[3];
    ll rcnt1 = 0, gcnt1 = 0, bcnt1 = 0;
    for (i = 0; i < 3; i++)
    {
        cin >> s[i];
        if (s[i] == 'R')
            rcnt1++;
        else if (s[i] == 'G')
            gcnt1++;
        else
            bcnt1++;
    }
    ll rcnt2 = 0, gcnt2 = 0, bcnt2 = 0;
    for (j = 0; j < 3; j++)
    {
        cin >> t[j];
        if (t[j] == 'R')
            rcnt2++;
        else if (t[j] == 'G')
            gcnt2++;
        else
            bcnt2++;
    }
    ll cnt = 0;
    if (rcnt1 == rcnt2 && gcnt1 == gcnt2 && bcnt1 == bcnt2)
    {
        vector<ll> v;
        if (t[0] != s[0])
        {
            cnt++;
            v.push_back(0);
        }
        if (t[1] != s[1])
        {
            cnt++;
            v.push_back(1);
        }
        if (t[2] != s[2])
        {
            cnt++;
            v.push_back(2);
        }

        if (cnt == 0 || cnt == 3)
        {
            cout << "Yes";
            return;
        }
        else if (cnt == 2)
        {
            if (v[0] == 0)
            {
                if (s[0] == s[1])
                {
                    cout << "Yes";
                    return;
                }
            }
            if (v[0] == 1)
            {
                if (s[1] == s[2] || s[1] == s[0])
                {
                    cout << "Yes";
                    return;
                }
            }
            if (v[1] == 1)
            {
                if (s[1] == s[2] || s[1] == s[0])
                {
                    cout << "Yes";
                    return;
                }
            }
            if (v[1] == 2)
            {
                if (s[1] == s[2])
                {
                    cout << "Yes";
                    return;
                }
            }
        }
    }
    else
        cout << "No";

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
    // cin >> t;

    while (t--)
    {
        gaurish();
    }
}
