// HAR HAR MAHADEV
// DATE: 09-04-2022
// TIME:06:35:09
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
    string temp = "";
    st(char, sat);
    for (auto x : s)
        sat.insert(x);
    if (sat.size() == 1)
        cout << s << "\n";
    else
    {
        foi(i, 0, s.length(), 1)
        {
            ll cnt = 0;
            foi(j, i, s.length(), 1)
            {
                if (s[i] == s[j] && j != s.length() - 1)
                    cnt++;
                else if (s[i] == s[j] && j == s.length() - 1)
                {
                    cnt++;
                    i = j;
                    break;
                }
                else
                {
                    if (j < s.length() && s[i] < s[j])
                        cnt *= 2;
                    i = j - 1;
                    break;
                }
            }
            foi(k, 0, cnt, 1)
            {
                temp = temp + s[i];
            }
        }
        cout << temp << "\n";
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

    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        gaurish();
    }
}
