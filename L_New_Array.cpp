#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void p()
{
    ll n;
    cin >>n;
    ll c[n];
    ll d[n];
  
  for (int i=0;i<n;i++)
    cin >>c[i];
    for (int i=0;i<n;i++)
    cin >>d[i];
    for (int i=0;i<n;i++)
    cout<<d[i]<<" ";
    
    for (int i=0;i<n;i++)
    cout<<c[i]<<" ";
    
}
    
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
   // cin>>t;

    while(t--) 
    {
         p();
    }
}
