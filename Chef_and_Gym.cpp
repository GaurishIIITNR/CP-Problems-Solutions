//Created by Mahadev_devote
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0); 
    ll tc;  cin>>tc;
    while(tc--)
     {
       ll a,b,c;
       cin>>a>>b>>c;
       if(c/(a+b)>0) cout<<2<<"\n";
       else if(c/a>0)cout<<1<<"\n";
       else cout<<0<<"\n";
     }
}