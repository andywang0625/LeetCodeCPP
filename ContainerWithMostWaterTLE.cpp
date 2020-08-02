/*
 * @Author: Kanade
 * @Date: 2020-08-01 22:48:48
 * @LastEditTime: 2020-08-02 18:13:59
 * @Description: Time Limit Exceeded
 */ 
#include<vector>
#include<iostream>
using namespace std;
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
int main(){
    vector<int> hei={};
    cout<<Solution().maxArea(hei);
    return 0;
}