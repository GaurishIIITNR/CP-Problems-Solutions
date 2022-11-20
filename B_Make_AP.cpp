#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  int a,b,c;
  while(t--)
  {
    int m;
    cin>>a>>b>>c;
     if((a+c)%2==0 &&((a+c)/2)%b==0 && (a+c)>0)
     cout<<"YES\n";
     else if(((2*b)-c)%a==0 && ((2*b)-c)>0 )
     cout<<"YES\n";
     else if(((2*b)-a)%c==0 && ((2*b)-a)>0)
     cout<<"YES\n";
      else 
       cout<<"NO\n";
       
  }
return 0;
   
}


       
  
   
 
  
   
