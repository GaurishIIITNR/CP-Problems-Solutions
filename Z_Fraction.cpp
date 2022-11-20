/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 18-02-2022**** //
                            // ******TIME:09:47:24****** //
========================================================================================
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll hcf(ll a,ll b){
  if(a>b)
  swap(a,b);
  if(b%a==0)
  return a;
  else
  return hcf((b%a),a);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
     
    while(t--) 
    {
      ll a1,a3,a4,a6;
      char a2,a5;  
      cin>>a1>>a2>>a3>>a4>>a5>>a6;
      cout<<(a1*a4)/(hcf(a1,a4))<<"/"<<hcf(a3,a6);

    }
}
