/*
 * @Author: Kanade
 * @Date: 2020-08-01 22:48:48
 * @LastEditTime: 2020-08-01 22:49:06
 * @Description: Time Limit Exceeded
 */ 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max{0};
        for(int i=0; i<height.size(); i++){
            for(int j=i+1; j<height.size(); j++){
                int a = min(height[i], height[j])*(j-i);
                max = a>max?a:max;
            }
        }
        return max;
    }
};