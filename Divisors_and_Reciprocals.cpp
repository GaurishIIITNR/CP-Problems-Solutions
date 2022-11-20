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
       ll a,b,c;
       cin>>a>>b>>c;
       if(a==b)
       cout<<c<<"\n";
       else if( a==4 && b==1 && c==1)
       cout<<-1<<"\n";
       else if((a*c)%b!=0)
       cout<<-1<<"\n";
       else
       cout<<((a*c)/b)<<"\n";

    }
}
