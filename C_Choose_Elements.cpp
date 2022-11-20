#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
   // cin>>t;

    while(t--) 
    {
   ll a,b ;
   cin >> a>>b;
   vector<ll> v(a);
   for (ll i = 0; i < a; i++)
       cin>>v[i];
   sort(v.rbegin(),v.rend());
   ll sm=0;
   for (ll i = 0; i <b;i++)
   if(v[i]>0)
   sm += v[i];
   else
   break;
   cout << sm << endl;
   
   
    }
}
