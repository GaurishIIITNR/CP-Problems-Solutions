/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 14-02-2022**** //
                            // ******TIME:16:56:24****** //
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
    ///cin>>t;
     
    while(t--) 
    {
      ll a;
      cin>>a;
       string p="VIBGYOR";
     string s="";
      int rem=a/7;
     while(rem--){
       s +=p;
      
     }


    int k=a%7;

    while(k>0) {
      s +=p.substr(3,k); 
      k -=4;
    }
      cout<<s<<"\n";
    }
}
