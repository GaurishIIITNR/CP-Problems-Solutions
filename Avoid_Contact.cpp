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
     ll a,b;
     cin>>a>>b;
     if(b==0)
     cout<<a<<"\n";
     else if(a==b)
     cout<<(2*b)-1<<"\n";
     else
     cout<<(2*b)+(a-b)<<"\n";
    }
}
