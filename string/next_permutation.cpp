#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int j = 0;
    bool flag = 1;

    for(int i=n-1; i>0; i--) {
        if (nums[i] <= nums[i-1]) continue;
        else {
            j = i-1;
            flag = 0;
            break;
        }
    }

    sort(nums.begin()+j+1, nums.end());
    if (flag) {sort(nums.begin()+j, nums.end());return;}

    // binary search
    int start = j+1, end = n-1, mid;
    while(start <= end) {
        mid = (start+end)/2;
        if (nums[mid] > nums[j]) {
            if (nums[mid-1] > nums[j]) end = mid;
            else break;
        }
        else start = mid + 1;
    }

    // linear search
    // for (int k=j+1; k<n; k++) {
    //     if (nums[j] < nums[k]) {
    //         swap(nums[j],nums[k]);
    //         break;
    //     }
    // }

    swap(nums[j],nums[mid]);
    sort(nums.begin()+mid+1, nums.end());
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (auto& i:nums)
        cin >> i;

    nextPermutation(nums);
    for(auto i:nums) cout << i << " ";
    cout << endl;

    return 0;
}
