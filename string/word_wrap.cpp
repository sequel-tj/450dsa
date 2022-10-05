#include <bits/stdc++.h>
using namespace std;

int memo[505][2005];

int wordWrap(vector<int> nums, int k, int i, int rem) {
    if(i == nums.size()) return 0;
    if(memo[i][rem] != -1) return memo[i][rem];

    int ans = (rem+1)*(rem+1) + wordWrap(nums,k,i+1,k-nums[i]-1);
    if(nums[i]<=rem) ans = min(ans, wordWrap(nums,k,i+1,rem-nums[i]-1));
    
    return memo[i][rem] = ans;
}

int solveWordWrap(vector<int>nums, int k) {
    memset(memo,-1,sizeof(memo));
    return wordWrap(nums,k,0,k);
}

int main() {
    int n; cin >> n;

    vector<int> nums(n);
    for(auto& i:nums) cin >> i;

    int k; cin >> k;

    cout << solveWordWrap(nums,k);
    return 0;
}
