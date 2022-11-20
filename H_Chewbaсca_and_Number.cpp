/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 18-02-2022**** //
                            // ******TIME:20:13:22****** //
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
    //cin>>t;
     
    while(t--) 
    {
      string a;
      cin>>a;
      for(ll i=0; i<a.length(); i++)
      {
          if(a[i]=='5')
          a[i]='4';
          else if(a[i]=='6')
          a[i]='3';
           else if(a[i]=='7')
          a[i]='2';
           else if(a[i]=='8')
          a[i]='1';
           else if(a[i]=='9')
          a[i]='0';
      }  
      cout<<a; 
    }
}
