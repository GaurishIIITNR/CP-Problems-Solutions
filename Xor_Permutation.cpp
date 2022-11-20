// HHM
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
vector<vector<int>> res;
void f(vector<int> &nums, int i, int end, vector<int> conti)
{
    // base
    if (i == end)
    {
        res.push_back(conti);
        conti.push_back(nums[i]);
        res.push_back(conti);
        return;
    }
    // recursive step
    f(nums, i + 1, end, conti);
    conti.push_back(nums[i]);
    f(nums, i + 1, end, conti);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    f(nums, 0, nums.size() - 1, {});
    return res;
}

int main()
{
    //     ll tests;  cin>>tests;
    //     while(tests--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<vector<int>> r = subsets(v);
        for (auto x : r)
        {
            for (auto y : x)
            {
                cout << y << " ";
            }
            cout << endl;
        }
    }
}