/*
 * @Author: Kanade
 * @Date: 2020-08-05 23:54:43
 * @LastEditTime: 2020-08-06 00:00:07
 * @Description: 
 */
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(auto i : s) {
            if(i == 'M') sum += 1000;
            else if(i == 'D') sum += 500;
            else if(i == 'C') sum += 100;
            else if(i == 'L') sum += 50;
            else if(i == 'X') sum += 10;
            else if(i == 'V') sum += 5;
            else if(i == 'I') sum += 1;
        }
        if(s.find("IV") != -1) sum -= 2;
        if(s.find("IX") != -1) sum -= 2;
        if(s.find("XL") != -1) sum -= 20;
        if(s.find("XC") != -1) sum -= 20;
        if(s.find("CD") != -1) sum -= 200;
        if(s.find("CM") != -1) sum -= 200;

        return sum;
    }
};

int main(){
    string r;
    cin>>r;
    cout<<Solution().romanToInt(r);
    return 0;
}