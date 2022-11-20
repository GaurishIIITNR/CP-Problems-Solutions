//🚩HHM🚩
// DATE: 08-06-2022
// TIME:22:54:17

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

ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
void hhm()
{
    ll i, j, k;
    ll n;
    cin >> k >> n;
    if (k >= n)
    {
        cout << n << "\n";
        return;
    }
    ll tmp = (n / k), tm1, tm2;
    ll cnt = 0, cnt1 = 0;
    if (tmp + 1 == power(2, (ll)log2(tmp) + 1))
    {
        tm1 = tmp;
        tm2 = tmp;
    }
    else
    {
        tm1 = power(2, (ll)log2(tmp)) - 1;
        tm2 = (tm1 * 2) + 1;
    }
    // deb2(tmp, tm1);
    cnt += (k - 1) * ((ll)log2(tm1) + 1);
    ll rem = n - ((k - 1) * tm1);
    while (rem > 0)
    {
        if (rem % 2)
            cnt++;
        rem /= 2;
    }
    cnt1 += (n / tm2) * ((ll)log2(tm2) + 1);
    ll rem1 = n % tm2;
    while (rem1 > 0)
    {
        if (rem1 % 2)
            cnt1++;
        rem1 /= 2;
    }
    cout << max(cnt, cnt1) << "\n";
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

// {
//    ll i,j,k;
//    ll n;cin>>n>>k;
//    ll mx=(ll)log2(n);
//    mx=power(2,mx);
//    if(mx*2==k+1)mx=k;
//    else mx-=1;

// return;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     ll t=1;
//     cin>>t;

//     while(t--)
//     {
//         hhm();
//     }
// }

// //#ifndef ONLINE_JUDGE
// //  freopen("in.txt", "r", stdin);
// //	 freopen("output.txt", "w", stdout);
// //#endif
// // //🚩HHM🚩
// // // DATE: 08-06-2022
// // // TIME:21:06:04

// // #include <bits/stdc++.h>
// // using namespace std;

// // #define ll long long int
// // #define dbl double
// // #define deb(v) cout << #v << " " << v << "\n"
// // #define debv(v)           \
// //     cout << #v << ": ";   \
// //     for (auto x : v)      \
// //     {                     \
// //         cout << x << " "; \
// //     }                     \
// //     cout << endl
// // #define deb2(v, k) cout << #v << " " << v << "\n" \
// //                         << #k << " " << k << "\n"
// // #define foi(i, base, n, k) for (i = base; i < n; i += k)
// // #define fod(i, base, n, k) for (i = base; i >= n; i -= k)
// // #define vec(type1, name) vector<type1> name
// // #define vp(type1, type2, name) vector<pair<type1, type2>> name
// // #define st(type, name) set<type> name
// // #define mpp(type1, type2, name) map<type1, type2> name
// // #define pb push_back
// // //#define     mp make_pair
// // #define fir first
// // #define sec second
// // #define all(x) x.begin(), x.end()
// // #define part(x, a, b) x.begin() + a, x.begin() + b
// // #define Pi 3.1415926535897932384626

// // ll power(ll a, ll b)
// // {
// //     ll re = 1;
// //     for (int i = 1; i <= b; i++)
// //         re *= a;
// //     return re;
// // }
// // void hhm()
// // {
// //     ll i, j, k;
// //     ll n;
// //     cin >> n >> k;
// //     if (n >= k)
// //     {
// //         cout << k << "\n";
// //         return;
// //     }
// //     ll r = (ll)log2(k);
// //     vec(ll, v)(31, 0);
// //     for (i = 0; i < 31; i++)
// //     {
// //         v[i] = k % 2;
// //         k /= 2;
// //     }
// //     // debv(v);
// //     ll cnt = 0;
// //     ll l = 0;
// //     for (i = 0; i <=r; i++)
// //     {
// //         if (i == l && i == 0)
// //         {
// //             if (v[i] % 2)
// //                 cnt += power(2, (min((ll)log2((n / 2)) + 1, r - l))) + 1;
// //             else
// //                 cnt += power(2, (min((ll)log2((n / 2) + 1), r - l)));
// //             deb2(l, r);
// //             l += min((ll)log2((n / 2)) + 1, r - l);
// //         }
// //         else if (i == l)
// //         {
// //             if (v[i] % 2)
// //                 cnt += power(2, (min((ll)log2((n / 2)) + 1, r - l)));
// //             else
// //                 cnt += power(2, (min((ll)log2((n / 2) + 1), r - l)))-1;
// //             deb2(l, r);
// //             l += min((ll)log2((n / 2)) + 1, r - l);
// //         }
// //         else
// //             cnt += v[i];
// //         deb(cnt);
// //     }
// //     cout << cnt << "\n";

// //     return;
// // }

// // int main()
// // {
// //     ios_base::sync_with_stdio(0);
// //     cin.tie(0);

// //     ll t = 1;
// //     cin >> t;

// //     while (t--)
// //     {
// //         hhm();
// //     }
// // }
