//HHM
// DATE: 23-05-2022
// TIME:20:08:39

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
    vec(ll, v)(n);
    for (i = 0; i < n; i++)
        cin >> v[i];
    ll n1;
    cin >> n1;
    vec(ll, v1)(n1);
    for (i = 0; i < n1; i++)
        cin >> v1[i];
    sort(all(v1));
    reverse(all(v1));
    sort(all(v));
    reverse(all(v));
    for (i = 0; i < min(n, n1); i++)
    {
        if (v1[i] > v[i])
        {
            cout << "Bob\n";
            cout << "Bob\n";
            return;
        }
        else if (v1[i] < v[i])
        {
            cout << "Alice\n";
            cout << "Alice\n";
            return;
        }
        else
        {
             cout << "Alice\n";
            cout << "Bob\n";
            return;
        }
    }
    // if (n1 > n)
    // {
    //     cout << "Bob\n";
    //     cout << "Bob\n";
    // }
    // else if (n1 < n)
    // {
    //     cout << "Alice\n";
    //     cout << "Alice\n";
    // }
    // // else
    // // {
    // //     cout << "Alice\n";

    // // }
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