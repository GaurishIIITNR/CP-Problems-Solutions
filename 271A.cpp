#include <bits/stdc++.h>
using namespace std;


int main()
{
 int n;
 cin>>n;
 for(int i=n+1;true;i++)
 {
 	string s=to_string(i);
 	set<char>st;
  for(auto x:s){
  	st.insert(x);}
  if(st.size()==s.size())
  {cout<<i;
  break;}
  }
}