//=======================================================//
  // HAR HAR MAHADEV
  // DATE: 27-04-2022
  //TIME:22:49:32
//=======================================================//
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout<<#v<<" "<<v<<"\n"
#define foi(i,base,n,k) for(i=base;i<n;i+=k)
#define fod(i,base,n,k) for(i=base;i>=n;i-=k)
#define vec(type1,name) vector<type1>name
#define vp(type1,type2,name) vector<pair<type1,type2>>name
#define st(type,name) set<type>name
#define mpp(type1,type2,name) map<type1,type2>name
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x,a,b) x.begin()+a, x.begin()+b
#define Pi 3.1415926535897932384626

bool sorte(pair<ll, ll>v1, pair<ll, ll>v2)
{
    if ((v1.first - v1.second) == (v2.first - v2.second))
        return (v1.first <= v2.first);
    return (v1.first - v1.second) < (v2.first - v2.second);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, rupees;
        cin >> n >> rupees;
        vector<pair<ll, ll>> vep;
        vector<ll> v1;
        for (ll i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            v1.push_back(z);
        }
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            vep.push_back({v1[i], p});
        }
        sort(vep.begin(), vep.end(), sorte);
        ll cnt = 0;
        for (auto x : vep)
        {
            if (x.first > rupees)
                continue;
            else
            {
                cnt += ((rupees - x.first) / (x.first - x.second)) + 1;
                if ((rupees - x.first) % (x.first - x.second) == 0)
                    rupees =x.first-(x.first - x.second);
                else
                    rupees = x.first - ((x.first - x.second) - ((rupees - x.first) % (x.first - x.second)));
            }
        }
        cout << cnt<< "\n";
    }
}