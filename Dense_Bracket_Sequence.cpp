//🚩HHM🚩
// DATE: 22-06-2022
// TIME:20:28:56

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
// set<ll>st;
// map<ll,ll>mp;
// string s;cin>>s;

void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    // vector<ll>v(n,0);
    // vin(v,n);
    string s;
    cin >> s;
    ll cnt = 0, cnt1 = 0;
    ll p1 = 0, p2 = s.length() - 1;
    while (p1 < p2)
    {
        if (s[p1] == '(' && s[p2] == ')')
        {
            cnt1++;
            cnt++;
        }
        else if (s[p1] == s[p2])
        {
            if (s[p1] != '(')
            {
                cnt++;
                for (i = p1; i < p2; i++)
                {
                    if (s[i] == '(')
                    {
                        cnt1++;
                        p1 = i;
                        break;
                    }
                }
            }
            else
            {
                cnt1++;
                for (i = p2; i > p1; i--)
                {
                    if (s[i] == ')')
                    {
                        cnt++;
                        p2 = i;
                        break;
                    }
                }
            }
        }
        p1++;
        p2--;
    }
    // deb2(p1, p2);
    cout << n - (2 * min(cnt1, cnt)) << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
