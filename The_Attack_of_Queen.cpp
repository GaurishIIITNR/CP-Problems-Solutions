// Created by Mohit Kulhari
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        cout << min(abs(1 - x), abs(1 - y)) + min(abs(n - x), abs(n - y)) + min(abs(n - x), abs(1 - y)) + min(abs(1 - x), abs(n - y)) + 2 * (n - 1) << endl;
    }
}