//===================================================================================//
                               //      हर हर महादेव🙏🙏   //
                              //    AUTHOR: GAURISH OJHA //
                             //     DATE: 12-02-2022    //
                            //      TIME:10:00:23      //
//===================================================================================//

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
      ll cnt=0;
      cin>>a;
      ll flag=1;
      for(ll i=1;i*i<=2*a;i++)
      {
         if(a%i==0) 
         cnt+=1;
          if(cnt>2)
              {
                  cout<<"NO\n";
                  flag=2;
                  break;
              }
      }
      if(flag==1 && cnt==2)
      {
          cout<<"YES\n";
      } 
      else if(flag==1)
      cout<<"NO\n";
    }
}
