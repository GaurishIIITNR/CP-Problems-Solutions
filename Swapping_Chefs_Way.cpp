// Created by LALU PRASAD YADAV
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        string s;
        cin >> n >> s;
        string temp = s;
        // cout << s << "\n";
        sort(temp.begin(), temp.end());
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] > s[n - i - 1])
            {
                //    cout << "****YES\n";
                char c;
                c = s[i];
                s[i] = s[n - i - 1];
                s[n - i - 1] = c;
            }
        }
        // cout << s << "\n";
        if (temp == s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}