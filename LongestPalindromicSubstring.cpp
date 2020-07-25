/*
 * @Author: Kanade
 * @Date: 2020-07-24 22:26:21
 * @LastEditTime: 2020-07-24 22:46:04
 * @Description: 
 */ 
#include<iostream>
#include<string>
using namespace std;

class Solution {
    string getLPS(string s){
        string ans="";
        int length = s.length();
        bool dpMap[1000][1000];
        int maxL = 1;
        int left = 0;
        for(int i=1;i<length;i++){
            for(int j=0;j<=i;j++){
                if(i-j<2){
                    dpMap[j][i] = s[i]==s[j];
                }
                else
                    dpMap[j][i] = dpMap[j+1][i-1]&&(s[i]==s[j]);
                if(dpMap[j][i]&&(i-j+1)>maxL){
                    maxL = i-j+1;
                    left = j;
                }
            }
        }
        ans = s.substr(left, maxL);
        return ans;
    }
public:
    string longestPalindrome(string s) {
        return getLPS(s);
    }
};

int main(){
  string a;
  cin>>a;
  cout<<Solution().longestPalindrome(a);
  return 0;
}
