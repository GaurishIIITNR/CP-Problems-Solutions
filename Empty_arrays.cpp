/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 28-02-2022**** //
                            // ******TIME:20:27:52****** //
========================================================================================
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define erase(name, i) name.erase(name.begin() + i)
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
    ll a;
    cin >> a;
    ll d = a;
    vec(ll, v)(a);
    vec(ll, ve)(a);
    foi(i, 0, a, 1)
            cin >>
        v[i];
    foi(i, 0, a, 1)
            cin >>
        ve[i];
    ll cnt = 0;
    vector<ll> res;
    res = v;
    // j = 0;
    foi(i, 0, a, 1)
    {  //foi(j,0,res.size(),1)
       //cout<<res[j]<<" ";
     //  cout<<"\n";
        vector<ll> res1;
        foi(j, 0, res.size(), 1)
        {  
            if (ve[i] == res[j])
            {
                foi(k, j + 1, res.size(), 1)
                    res1.pb(res[k]);
                foi(k, 0, j, 1)
                {
                    cnt++;
                    res1.pb(res[k]);
                }
                 res = res1;
                 break;
            }
           
        }
    }
    // if(d==3)
    cout << d + cnt<< "\n";
    // else
    // cout<<d+cnt+1<<"\n";
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
    // cin >> t;

    while (t--)
    {
        gaurish();
    }
}
