//HHM
// DATE: 19-06-2022
// TIME:14:52:55

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
    ll i, j, k;
    ll n;
    string s;
    cin >> n >> s;
    ll k1 = k;

    // while (k1 > 0)
    // {
    //     s = char((k1 % 10) + '0') + s;
    //     k1 /= 10;
    // }
    string hhm = "";
    ll c = 0;
    if (s[0] == '9')
    {
        for (i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '0' && c == 0)
            {
                hhm = '1' + hhm;
                c = 0;
            }
            else if (s[i] == '0' && c == 1)
            {
                hhm = '0' + hhm;
                c = 0;
            }
            else if (s[i] == '1' && c == 0)
            {
                hhm = '0' + hhm;
                c = 0;
            }
            else if (s[i] == '1' && c == 1)
            {
                hhm = '9' + hhm;
                c = 1;
            }
            else
            {
                hhm = char(11 - c - (s[i] - '0') + '0') + hhm;
                c = 1;
            }
        }
    }
    else
    {
        for (auto x : s)
        {
            hhm += char(9 - (x - '0') + '0');
        }
    }
    cout << hhm << "\n";
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
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif