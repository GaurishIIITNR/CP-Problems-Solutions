// HHM
// DATE:19-07-2022
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
    string s;
    // cin>>s;cout<<s;
    vector<string>v;
    ll mx=0;
    while(getline(cin,s)){
        ll l=s.length();
        mx=max(mx,l);
        v.pb(s);
    }
    for(i=0;i<mx+2;i++)cout<<'*';
        cout<<"\n";
    ll cnt=0;
    for(auto x:v){
        ll n=mx-x.length();
        ll i=0;
        string k=x;
        if(n%2==0){
               while(i<n){
               if(i%2)k+=" ";
               else k=" "+k;
               i++;
            }
        }
        else if(n%2 && cnt%2==0){
            while(i<n){
            if(i%2==0)k+=" ";
            else k=" "+k;
            i++;
            }
           cnt++; 
        }
        else {
              while(i<n){
              if(i%2)k+=" ";
              else k=" "+k;
              i++;
            }
           cnt++;
       }
        k="*"+k+"*";
        cout<<k<<"\n";
    }
    for(i=0;i<mx+2;i++)cout<<'*';
        cout<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
   // cin >> t;
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