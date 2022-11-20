//🚩HHM🚩
// DATE: 25-05-2022
// TIME:23:57:59

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define debv(v)           \
    cout << #v << ": ";   \
    for (auto x : v)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
//#define     mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void hhm()
{
    // ll i, j, k;
    // ll n;
    // cin >> n;
    // ll a1, b1, c1, d1;
    // cin >> a1 >> b1 >> c1 >> d1;
    // string s;
    // ll a = 0, b = 0, ab = 0, ba = 0, bab = 0, aba = 0;
    // cin >> s;
    // for (i = 1; i < s.length(); i++)
    // {
    //     if (i < s.length() - 1 && s[i] == 'A' && s[i + 1] == 'B' && s[i - 1] == 'B')
    //     {
    //         bab++;
    //         i += 2;
    //     }
    //     else if (i < s.length() - 1 && s[i] == 'B' && s[i + 1] == 'A' && s[i - 1] == 'A')
    //     {
    //         aba++;
    //         i += 2;
    //     }
    //     else if (s[i] == 'B' && s[i - 1] == 'A')
    //     {
    //         ba += 1;
    //         i += 1;
    //     }
    //     else if (s[i] == 'A' && s[i - 1] == 'B')
    //     {
    //         ab += 1;
    //         i += 1;
    //     }
    //     else if (s[i - 1] == 'A')
    //         a++;
    //     else if (s[i - 1] == 'B')
    //         b++;
    // }
    // deb(a);
    // deb(b);
    // deb(ab);
    // deb(ba);
    // deb(bab);
    // deb(aba);
    // cout << "\n";
    // ll reqab = 0, reqba = 0;
    // if (d1 <= ba)
    //     ba = ba - d1;
    // else
    //     reqba = d1 - ba;
    // if (reqba > bab + aba)
    // {
    //     cout << "NO\n";
    //     return;
    // }
    // if (c1 <= ab)
    //     ab = ab - c1;
    // else
    //     reqab = c1 - ab;
    // if (reqab > bab + aba)
    // {
    //     cout << "NO\n";
    //     return;
    // }
    // if (reqab + reqba > aba + bab)
    // {
    //     cout << "NO\n";
    //     return;
    // }
    // ll req = reqab + reqba;
    // if (b1 <= b && a1 <= a)
    // {
    //     cout << "YES\n";
    //     return;
    // }
    // if (b1-b <=a1-a)
    // {
    //     if ((aba + bab - reqab - reqba) + a >= a1)
    //     {
    //         cout << "YES\n";
    //         return;
    //     }
    //     else if(aba)
    // }
   
    // return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
