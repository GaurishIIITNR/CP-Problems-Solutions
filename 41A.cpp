#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  string s,v;
  cin>>s>>v;
  reverse(v.begin(),v.end());
  if(v==s)
  cout<<"YES";
  else
  cout<<"NO";
  
}