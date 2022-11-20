//🚩HHM🚩
// DATE: 08-05-2022
// TIME:20:08:22

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
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
    cin >> n;    // input;
    st(ll, sat); // making set for checking duplicate;
    ll cnt = 0;
    for (i = 0; i < n; i++)
    {
        cin >> k;
        sat.insert(k); // inserting in set;
        if (k == 0)
            cnt++; // counting numbers of zeros;
    }
    if (cnt > 0) // if numbeer of zeros is greater than 0;
    {
        cout << n - cnt << "\n"; // no operation for zeros and taking pair with zero and remaning number;
        return;
    }
    if (sat.size() == n) // no duplicate;
    {
        cout << n + 1 << "\n";
        return;
    }
    cout << n << "\n"; // if duplicate;
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
