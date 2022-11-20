
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void gaurish()
{
   ll i,j,k; 
   ll a,cnt=0;
   cin>>a;
   while(a--)
   {
     ll c;
     cin>>c;
     if(c>=10&&c<=60)
     cnt++;
   }
   cout<<cnt<<"\n";
   
return; 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t=1;
    cin>>t;
     
    while(t--) 
    {
        gaurish();
    }
}
