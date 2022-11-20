/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 28-02-2022**** //
                            // ******TIME:15:21:20****** //
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    // ll t=1;
    // cin>>t;
    string s;
    bool flag = 0;
    while (getline(cin,s))
    {
        string k = "";
        if (s == "\0")
            continue;
        else
        {
            for (ll i = 0; i < s.length(); i++)
            {
                if (s[i] == '/' && s[i + 1] == '/' && (i + 1) < s.length() && flag == 0)
                    break;
                else if (s[i] == '/' && s[i + 1] == '*' && (i + 1) < s.length() &&flag == 0)
                    flag = 1;
                else if (s[i-1] == '*' && s[i] == '/' && (i - 1)>=0&&flag == 1)
                    flag = 0;
                else if (flag == 0)
                    k += s[i];
            }
        }
        if (k != "\0"||k!="")
            cout << k << "\n";
    }
}
