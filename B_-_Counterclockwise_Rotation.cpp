// HHM
//  DATE: 09-07-2022
// TIME:17:38:46

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
dbl dis(ll a, ll b)
{
    return sqrt(pow(b, 2) + pow(a, 2));
}
void HHM()
{
    ll i, j, k;
    ll n, a;
    cin >> n >> k >> a;
    dbl r = (a * Pi) / 180.0;
    dbl a1 = (atan((dbl)k / n) + r);
    dbl res1 = dis(n, k) * cos(a1);
    dbl res2 = dis(n, k) * sin(a1);
    a1=(abs(atan((dbl)k / n)) + r);
    if (n == 0 && k == 0)
    {
        res1 = 0.0;
        res2 = 0.0;
        printf("%.20f %.20f", res1, res2);
        return;
    }
    cout << (a1*180)/Pi << "\n";
    if (a1 >= 2 * Pi)
        a1 -= 2 * Pi;
    if (0 <= a1 && a1 <= (Pi / 2.0))
        printf("%.20f %.20f", abs(res1), abs(res2));
    else if ((Pi / 2.0) < a1 && a1 <= Pi)
        printf("%.20f %.20f", (-1) * abs(res1), abs(res2));
    else if (Pi < a1 && a1 <= (Pi * 3) / 2.0)
        printf("%.20f %.20f", (-1) * abs(res1), (-1) * abs(res2));
    else
        printf("%.20f %.20f", abs(res1), (-1) * abs(res2));

    // set<ll>st;
    // map<ll,ll>mp;
    // string s;cin>>s;
    // vector<ll>v(n,0);

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    //  ll tt=1;
    while (t--)
    {
        // cout << "Case #" << tt << ": ";
        HHM();
        // tt++;;
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
