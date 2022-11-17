/*
========================================================================================
                               // ****  ***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 01-03-2022**** //
                            // ******TIME:23:03:55****** //
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
#define erase(name, i) name.erase(name.begin() + i)
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
    ll j, k;
    string s;
    cin >> s;
    char i;
    k = s.length();
   st(char,sat);
   foi(j,0,k,1)
       sat.insert(s[j]);
    if(sat.size()%2)
    cout << "IGNORE HIM!";
    else
    cout << "CHAT WITH HER!";

    // for (i = 'a'; i <= 'z'; i++)
    // {
    //     if (v[(int)(i - 'a')] % 2)
    //         cout << "IGNORE HIM!";
    //     return;
    // }
    // cout << "CHAT WITH HER!";
    // return;
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
    //cin >> t;

    while (t--)
    {
        gaurish();
    }
}