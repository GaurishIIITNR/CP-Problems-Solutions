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
      string s;
      cin >> s;
      ll e=0,g=0,y=0,p=0,t=0;
      for(int i=0;i<s.length();i++)
      {
          if(s[i]=='e' or s[i]=='E' )
          e+=1;
          else if(s[i]=='g' or s[i]=='G' )
          g+=1;
          else if(s[i]=='Y' or s[i]=='y' )
          y+=1;
          else if(s[i]=='p' or s[i]=='P' )
          p+=1;
          else if(s[i]=='T' or s[i]=='t' )
          t+=1;
      }
      if(e<=g && e<=y&& e<=p&&e<=t)
      cout<<e<<"\n";
      else if(g<=e && g<=y&& g<=p&&g<=t)
      cout<<g<<"\n";
      else if(y<=e && y<=g&& y<=p&&y<=t)
      cout<<y<<"\n";
      else if(p<=e && p<=g&& p<=y&&p<=t)
      cout<<p<<"\n";
      else
       cout<<t<<"\n";
    }
}
