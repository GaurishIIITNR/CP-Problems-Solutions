#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 void p(ll n)
 {
     for(int i=1;i<=n;i++)
     {
         cout<<i;
         if(i!=n)
         cout<<" ";
     }
 }
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
   // cin>>t;

    while(t--) 
    {
   ll a;
   cin >> a;
   p(a);
    }
}
