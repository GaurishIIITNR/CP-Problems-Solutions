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
        if ((s[0] == 'y' || s[0] == 'Y') && (s[1] == 'e' || s[1] == 'E') && (s[2] == 'S' || s[2] == 's'))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}