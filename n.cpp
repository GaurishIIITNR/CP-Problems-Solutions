#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, j = 0;
    cin >> q;
    int arr[q];
    while (j < q)
    {
        int n;
        cin >> n;
        vector<int> v;
        vector<int> v0;
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (x % 2 == 0)
            {
                v0.push_back(x);
            }
            else
            {
                v1.push_back(x);
            }
        }
        v2 = v;
        sort(v2.begin(), v2.end());
        if (v == v2)
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<int> v4;
            vector<int> v5;
            v4 = v0;
            v5 = v1;
            sort(v4.begin(), v4.end());
            sort(v5.begin(), v5.end());
            if (v4 == v0 & v5 == v1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        j++;
    }
    return 0;
}