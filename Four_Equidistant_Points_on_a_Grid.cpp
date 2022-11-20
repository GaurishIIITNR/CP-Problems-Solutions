
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t=1;
    //cin>>t;
     
    while(t--) 
    {
       ll d;
       cin>>d;
       if(d%2==0)
       {
           d/=2;
           cout<<0<<" "<<d<<"\n";
           cout<<d<<" "<<0<<"\n";
           cout<<0<<" "<<-d<<"\n";
           cout<<-d<<" "<<0<<"\n";
       }
       else
       cout<<-1<<"\n";
    }
}
