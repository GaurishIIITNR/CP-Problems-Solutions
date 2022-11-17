//HHM
// DATE: 15-05-2022
// TIME:01:32:24

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
    cin >> n;
    // if (n % 2 && n > 1)
    // {
    //     cout << "Ashishgup\n";
    //     return;
    // }
    ll cnt = 0;
    while (n > 0)
    {
        if (n % 2)
            break;
        else
        {
            n /= 2;
            cnt++;
        }
    }
    if (n == 1 && (cnt > 1 || cnt == 0))
    {
        cout << "FastestFinger\n";
        return;
    }
    if (n == 1 && cnt == 1)
    {
        cout << "Ashishgup\n";
        return;
    }
    if (n % 2 && cnt == 1)
    {
        for (i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                cout << "Ashishgup\n";
                return;
            }
        }
        cout << "FastestFinger\n";
        return;
    }
    if (n % 2 && (cnt > 1 || cnt == 0))
    {
        cout << "Ashishgup\n";
        return;
    }
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