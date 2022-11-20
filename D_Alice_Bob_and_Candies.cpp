//=======================================================//
// HAR HAR MAHADEV
// DATE: 20-04-2022
// TIME:12:31:20
//=======================================================//
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vec(ll, v)(n);
    foi(i, 0, n, 1)
            cin >>
        v[i];
    sort(all(v));
    ll sm1 = v[0], sm2 = 0;
    ll cnt = 1;
    ll reco;
    ll temp1 = v[0], tmpsm = 0;
    foi(i, 1, n, 1)
    {
        if (v[i] > temp1 && cnt % 2)
        {
            sm2 += v[i];
            tmpsm += v[i];
            temp1 = tmpsm;
            tmpsm = 0;
            cnt++;
            reco=5;
        }
        else if (cnt % 2)
        {
            sm2 += v[i];
            tmpsm += v[i];
            temp1 -= v[i];
            reco=6;continue;
        }
        else if (v[i] > temp1 && cnt % 2 == 0)
        {
            sm1 += v[i];
            tmpsm += v[i];
            temp1 = tmpsm;
            tmpsm = 0;
            cnt++;reco=7;
        }
        else if (cnt % 2 == 0)
        {
            sm1 += v[i];
            tmpsm += v[i];
            temp1 -= v[i];
            reco=8;continue;
        }
        deb(sm1);
        deb(sm2);
        cout<<"\n";
        deb(cnt);
        deb(reco);
    }
    cout << cnt << " " << sm1 << " " << sm2 << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    ll t = 1;
    cin >> t;

    while (t--)
    {
        gaurish();
    }
}
