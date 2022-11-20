// HHM
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        string s;
        cin >> s;
        if ((s[0] == 'y' || s[0] == 'Y') && (s[0] == 'e' || s[0] == 'E') && (s[0] == 'S' || s[0] == 's'))
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}