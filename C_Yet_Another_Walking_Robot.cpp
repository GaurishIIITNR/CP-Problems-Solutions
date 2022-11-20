//=======================================================//
// HAR HAR MAHADEV
// DATE: 26-04-2022
// TIME:16:39:37
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
    string s;
    cin >> s;
    for (i = 0; i < n - 1; i++)
    {
        if ((s[i] == 'L' && s[i + 1] == 'R') || (s[i] == 'R' && s[i + 1] == 'L'))
            cout << i + 1 << " " << i + 2 << "\n";
        else if ((s[i] == 'D' && s[i + 1] == 'U') || (s[i] == 'U' && s[i + 1] == 'D'))
            cout << "ku"<< " " << i + 2 << "\n";
    }
    // ll sta=0,cnt=0;
    //  for (i = 0; i < n; i++)
    //  {
    //      if()
    //  }

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
