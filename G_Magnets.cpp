#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll cnt=0;
    string x="22";
    while(t--) 
    {
       string s;
       cin>>s;
       if(x!=s)
       {
           cnt+=1;
           x=s;
       } 
    }
    cout<<cnt;
}
