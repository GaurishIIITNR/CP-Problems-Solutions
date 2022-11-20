/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 22-02-2022**** //
                            // ******TIME:23:16:04****** //
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
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll ch = 0, pep = 0, bas = 0, pin = 0, mus = 0, tom = 0, cnt = 0;
    ll t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        while (a--)
        {
            string s;
            cin >> s;
            if (s == "cheese")
                ch++;
            else if (s == "peppers")
                pep++;
            else if (s == "basil")
                bas++;
            else if (s == "mushrooms")
                mus++;
            else if (s == "pineapple")
                pin++;
            else
                tom++;
        }
        ll b;
        cin >> b;
        while (b--)
        {
            string s;
            cin >> s;
            if (s == "cheese")
                ch--;
            else if (s == "peppers")
                pep--;
            else if (s == "basil")
                bas--;
            else if (s == "mushrooms")
                mus--;
            else if (s == "pineapple")
                pin--;
            else
                tom--;
        }
    }
    if (ch > 0)
        cnt++;
    if (pep > 0)
        cnt++;
    if (bas > 0)
        cnt++;
    if (mus > 0)
        cnt++;
    if (pin > 0)
        cnt++;
    if (tom > 0)
        cnt++;
    cout << cnt << " ";
    if (ch > 0)
        cout << "cheese"
             << " ";
    if (pep > 0)
        cout << "peppers"
             << " ";
    if (bas > 0)
        cout << "basil"
             << " ";
    if (mus > 0)
        cout << "mushrooms"
             << " ";
    if (pin > 0)
        cout << "pineapple"
             << " ";
    if (tom > 0)
        cout << "tomatoes"
             << " ";

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;
    gaurish();
}
