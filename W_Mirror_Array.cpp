#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;

    while(t--) 
    {
      ll a,b;
      cin>>a>>b;
      ll arr[a][b];
      for(ll i=0; i<a;i++)
      for(ll j=0;j<b;j++)
      cin>>arr[i][j];
       for(ll i=0; i<a;i++)
       {
      for(ll j=b-1;j>=0;j--)
      cout<<arr[i][j]<<" ";
      cout<<"\n";
       }
    }
}
