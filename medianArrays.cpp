/*
 * @Author: Kanade
 * @Date: 2020-07-24 01:45:18
 * @LastEditTime: 2020-07-24 21:55:29
 * @Description: 
 */ 
#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
class Solution {
    double solve(vector<int>& nums1, vector<int>& nums2){
        vector<int> nums;
        nums.insert(nums.end(), nums1.begin(), nums1.end());
        nums.insert(nums.end(), nums2.begin(), nums2.end());
        sort(nums.begin(), nums.end());
        if(nums.size()&true)
            return nums[nums.size()/2];
        else return (nums[nums.size()/2]+nums[(nums.size()/2)-1])/ 2.0;
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        return solve(nums1, nums2);
    }
};

int main(){
    vector<int> nums1, nums2;
    nums1 = {1,2,3};
    nums2 = {2,3};
    cout<<Solution().findMedianSortedArrays(nums1, nums2);
}
