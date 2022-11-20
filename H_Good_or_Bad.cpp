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
string a;
cin >> a;
ll flag=1;

  for(int i=0; i<(a.length()-4);i++)
  {if(a.substr(i,3)=="101" or a.substr(i,3)=="010" )
    {
     flag=2;
      cout<<"Good\n";
      break;}
  }
  if(flag==1)
  cout<<"Bad\n";
    }
}
