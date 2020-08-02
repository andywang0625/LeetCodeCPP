/*
 * @Author: Kanade
 * @Date: 2020-08-01 22:59:37
 * @LastEditTime: 2020-08-01 23:00:53
 * @Description: 
 */ 
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l{0}, r = height.size()-1;
        int max{0};
        while(l<r){
            int area = min(height[l],height[r])*(r-l);
            max = area>max?area:max;
            if(height[l]>height[r])
                r--;
            else
                l++;
        }
        return max;
    }
};
int main(){
    vector<int> v={1,8,6,2,5,4,8,3,7};
    cout<<Solution().maxArea(v);
    return 0;
}