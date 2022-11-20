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
      ll x;
      cin>>x;
      string s;
      cin>>s;
      ll sm=0;
      for(ll i=0; i<s.length(); i++)
      {
          if(s[i]=='C')
           sm+=2;
           else if(s[i]=='D')
           sm+=1;
      }
      if(sm>28-sm)
      cout<<(60*x)<<"\n";
      else if(sm==28-sm)
      cout<<(55*x)<<"\n";
      else
      cout<<(40*x)<<"\n";
    }
}
