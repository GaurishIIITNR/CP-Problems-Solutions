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
        cin>>a;
        ll b[a];
        ll cnto=0,cnte=0;
        for (ll i = 0; i < a; i++)
        {
            cin>>b[i];
            if(b[i]%2==0)
            cnte+=1;
            else
            cnto+=1;
        }
        
        if(a%2!=0)
        cout<<"-1\n";
        else
        {
           if(cnte>=cnto)
           cout<<(cnte-cnto)/2<<"\n";
           else
            cout<<(cnto-cnte)/2<<"\n";
        }
    }
}
