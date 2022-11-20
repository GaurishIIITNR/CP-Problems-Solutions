//=======================================================//
// HAR HAR MAHADEV
// DATE: 23-04-2022
// TIME:19:07:52
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
    string a, b;
    cin >> a >> b;
    ll cnta1 = 0, cnta2 = 0, cntb1 = 0, cntb2 = 0;
    for (auto x : a)
    {
        if (x == 'a')
            cnta1++;
        else
            cntb1++;
    }
    for (auto x : b)
    {
        if (x == 'a')
            cnta2++;
        else
            cntb2++;
    }
    if (cnta1 == 0 && cnta2 == 0)
    {
        for (i = 0; i < (cntb1 * cntb2) / (__gcd(cntb1, cntb2)); i++)
            cout << 'b';
        cout << "\n";
        return;
    }
    if (cntb1 == 0 && cntb2 == 0)
    {
        for (i = 0; i < (cnta1 * cnta2) / (__gcd(cnta1, cnta2)); i++)
            cout << 'a';
        cout << "\n";
        return;
    }
    if (a.size() >= b.size())
    {
        for (i = 0; i < a.size(); i += b.size())
        {
            if (a.substr(i, b.size()) != b)
            {
                cout << -1 << "\n";
                return;
            }
        }
        cout<<a<<"\n";
        return;
    }
    if (a.size() < b.size())
    {
        if (b.substr(0, a.size()) == a)
            cout << b << "\n";
        return;
    }
    cout << -1 << "\n";
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
