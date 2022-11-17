#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int t;
  cin>>t;
  int sm=0,mx=0;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    sm-=a;
    sm+=b;
    mx=max(sm,mx);
    
  }
  cout<<mx;

}