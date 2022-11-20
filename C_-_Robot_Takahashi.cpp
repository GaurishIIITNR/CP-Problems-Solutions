//🚩HHM🚩
// DATE: 25-06-2022
// TIME:18:03:19

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
bool comp(pair<char, ll> p1, pair<char, ll> p2)
{
    if (p1.first == p2.first)
        return p1.S >= p2.S;
    return p1.F > p2.F;
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v0, v1;
    // vector<pair<char, ll>> vp;
    // vin(v,n);
    string s;
    cin >> s;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        if (s[i] == '0')
            v0.pb(d);
        else
            v1.pb(d);
    }
    sort(all(v1));
    reverse(all(v1));
    sort(all(v0));
    reverse(all(v0));
    if (v0.size() == 0 || v1.size() == 0 || v1[v1.size() - 1] > v0[0])
    {
        cout << n;
        return;
    }
    // deb(v1.size()+v0.size());
    ll cnt1 = v0.size(), cnt2 = v1.size();
    for (i = v1.size() - 1; i >= 0; i--)
    {
        if (v1[i] > v0[0])
        {
            cnt1 += i + 1;
            break;
        }
    }
    for (int i = 0; i < v0.size(); i++)
    {
        if (v1[v1.size() - 1] > v0[i])
        {
            cnt2 += v0.size() - i;
            break;
        }
    }
    // sort(all(vp), comp);
    // ll last1 = -1, first0 = -1;
    // for (i = 0; i < vp.size(); i++)
    // {
    //     if (vp[i].first == '0')
    //     {
    //         first0 = i;
    //         if (i == 0)
    //         {
    //             cout << vp.size();
    //             return;
    //         }
    //         else
    //             last1 = i - 1;
    //         break;
    //     }
    // }
    // if (first0 == -1)
    // {
    //     cout << vp.size();
    //     return;
    // }
    // ll cnt = first0, cnt1 = vp.size() - first0;
    // for (i = first0; i < vp.size(); i++)
    // {
    //     if (vp[i].S < vp[last1].S)
    //     {
    //         cnt += vp.size() - i;
    //         break;
    //     }
    // }
    // for (i = last1; i >= 0; i--)
    // {
    //     if (vp[i].S > vp[first0].S)
    //     {
    //         cnt1 += (i + 1);
    //         break;
    //     }
    // }

    cout << max(cnt2, cnt1) << "\n";
    // //    for(auto x:vp){
    // //     cout<<x.F<<" "<<x.S<<"\n";
    // //    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;

    while (t--)
    {
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
