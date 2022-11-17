/*
========================================================================================
                               // ****  ***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 21-02-2022**** //
                            // ******TIME:18:45:14****** //
========================================================================================
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--) 
    {
     ll a;
     cin>>a;
     ll sm;
      ll b;
      cin>>b;
      sm=b;
     for(ll i=1;i<a;i++)
      {
         
          cin>>b;
          sm|=b;
      }
      cout<<sm<<"\n";
    }
}