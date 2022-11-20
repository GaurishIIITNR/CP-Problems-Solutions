//🚩HHM🚩
// DATE: 29-06-2022
// TIME:20:48:54

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
void HHM()
{
    ll i, j, k;
    ll n, a, b;
    cin >> n >> a >> b;
    ll a1 = a, b1 = b;
    vector<ll> va, vb, res1, res2;
    for (ll i = 0; i < n; i++)
    {
        va.pb(a1 % 2);
        a1 /= 2;
    }
    for (ll i = 0; i < n; i++)
    {
        vb.pb(b1 % 2);
        b1 /= 2;
    }
    // vout(va);
    // vout(vb);
    ll temp = 0, temp1 = 0;
    for (i = n - 1; i >= 0; i--)
    {
        if (va[i] == vb[i])
            res1.pb(!va[i]);
        // res2.pb(!va[i]);
        // else res1.pb(1);
        else if (!temp)
        {
            res1.pb(va[i]);
            temp = 1;
        }
        else
            res1.pb(vb[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (va[i] == vb[i])
            res2.pb(!va[i]);
        // res2.pb(!va[i]);
        // else res1.pb(1);
        else if (!temp)
        {
            res2.pb(vb[i]);
            temp = 1;
        }
        else
            res2.pb(va[i]);
    }
    // for (i = n - 1; i >= 0; i--)
    // {
    //     if (va[i] == vb[i])
    //     {
    //         res3.pb(!va[i]);
    //         res4.pb(!vb[i]);
    //     }
    //     // res2.pb(!va[i]);
    //     // else res1.pb(1);
    //     else if (temp ==-1)
    //     {
    //         res1.pb(va[i]);
    //         res2.pb(vb[i]);
    //         temp = 1;
    //     }
    //     else
    //     {
    //         res1.pb(vb[i]);
    //         res2.pb(va[i]);
    //         temp = 0;
    //     }
    // }

    // for(i=0;i<)
    // vout(res1);vout(res2);
    // res1.pb(0);
    // res2.pb(0);
    reverse(all(res1));
    reverse(all(res2));
    // for (i = 0; i < res1.size(); i++)
    // {
    //     if (temp == 1)
    //     {
    //         if (res1[i] == va[i])
    //         {
    //             res1[i] = !va[i];
    //             break;
    //         }
    //     }
    //     else
    //     {
    //         if (res1[i] == vb[i])
    //         {
    //             res1[i] = !vb[i];
    //             break;
    //         }
    //     }
    // }
    // reverse(all(res2));
    ll ans1 = 0, ans2 = 0;
    for (i = 0; i < res1.size(); i++)
        ans1 += power(2, i) * res1[i];
    for (i = 0; i < res2.size(); i++)
        ans2 += power(2, i) * res2[i];
    if ((ans1 ^ a) * (ans1 ^ b) > (ans2 ^ a) * (ans2 ^ b))
        cout << ans1 << "\n";
    else
        cout << ans2 << "\n";

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
    cin >> t;
    // ll tt=1;
    while (t--)
    {
        // cout << "Case #" << tt << ": ";
        HHM();
        // tt++;;
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
