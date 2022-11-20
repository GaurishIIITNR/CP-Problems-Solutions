/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 14-02-2022**** //
                            // ******TIME:15:36:06****** //
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
      ll a,b,c,d;
      cin>>a>>b>>c>>d; 
      while(d--)
      {
          ll e;
          cin>>e;
          double s=(double)(sqrt(e)*sqrt(2));
          double x=(double)((10*sqrt(2))-s);
        printf("%.11f\n",abs(x/(double)(b-c)));

      }     
    }
}
