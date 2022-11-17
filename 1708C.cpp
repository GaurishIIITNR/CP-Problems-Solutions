#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q,cnt=0;
		cin>>n>>q;
		for(int i=0;i<n;i++)cin>>a[i];
		string s(n,'0');
		for(int i=n-1;i>=0;i--){
			if(a[i]<=cnt)s[i]='1';
			else if(cnt<q)cnt++,s[i]='1';
		}
		cout<<s<<endl;
	}
	return 0;
}