/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 20-02-2022**** //
                            // ******TIME:18:07:59****** //
========================================================================================
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[105][10004];
bool rec(vector<vector<ll>>&vp ,int  i,int sum ,int k){
    //base case
     if(i==0) {
          if(sum==k)
          return true;
          else
          return false;
     }
    if(dp[i][sum]!=-1)
    return dp[i][sum];
     if(sum>k){
     return dp[i][sum]=false;
     }
    return dp[i][sum]=rec(vp,i-1,sum+vp[i-1][0],k) || rec(vp,i-1,sum+vp[i-1][1],k);

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
      memset(dp,-1,sizeof(dp));
    while(t--) 
    {
         ll n,k;
         cin>>n>>k;
         vector<vector<ll>>vp(n);
         ll c,d;
     for(int i=0;i<n;i++){

     cin>>c>>d;
     vp[i].push_back(c);
     vp[i].push_back(d);
   
     }

     if(rec(vp,n,0,k))
     cout<<"Yes"<<"\n";
     else
     cout<<"No"<<"\n";


    }
}
