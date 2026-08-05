#include <bits/stdc++.h>
 
using namespace std;
 
pair<int, int> minSumSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    int minSum = INT_MAX;
    int currentSum = 0;
    int startIndex = 0;
 
    for (int i = 0; i < k; i++)
    {
        currentSum += nums[i];
    }
 
    minSum = currentSum;
 
    for (int i = k; i < n; i++)
    {
        currentSum += nums[i] - nums[i - k];
        if (currentSum < minSum)
        {
            minSum = currentSum;
            startIndex = i - k + 1;
        }
    }
 
    return make_pair(minSum, startIndex);
}
 
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
 
    pair<int, int> result = minSumSubarray(nums, k);
 
    cout << result.second + 1 << endl;
 
    return 0;
}