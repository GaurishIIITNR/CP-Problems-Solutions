//=======================================================//
// HAR HAR MAHADEV
// DATE: 30-04-2022
// TIME:20:07:50
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
    ll sm = 0;
    for (auto x : s)
        sm += ((ll)(x)-96);
    // deb(sm);
    ll alice, bob;
    if (s.length() % 2)
    {
        if (s.length() == 1)
            cout << "Bob"
                 << " " << s[0] - 96 << "\n";
        else
        {
            if (s[0] < s[s.length() - 1])
                cout << "Alice"
                     << " " << sm - (2 * (s[0] - 96)) << "\n";
            else
                cout << "Alice"
                     << " " << sm - (2 * (s[s.length() - 1] - 96)) << "\n";
        }
    }
    else
    {
        alice = sm;
        bob = 0;
        cout << "Alice"
             << " " << alice - bob << "\n";
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