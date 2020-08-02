/*
 * @Author: Kanade
 * @Date: 2020-07-24 01:45:18
 * @LastEditTime: 2020-08-02 18:17:24
 * @Description: 
 */ 
#include "string"
#include "iostream"
#include <cmath>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0, p=0, psub=0;
        string sub[10000];
        while(s[p] != '\0'){
            for(int z=p; z<n;z++){
                if(llUnique(sub[psub], s[z])){
                    sub[psub]+=s[z];
                }
                else{
                    psub++;
                    p++;
                    break;
                }
            }
        }
        p=0;
        while(sub[p]!=""){
            if(ans<sub[p].length())
                ans=sub[p].length();
            p++;
        }
        return ans;
    }

    bool llUnique(string sub, char c) {
        if(sub!=""){
            for (int i = 0; i < sub.length(); i++) {
                if(sub[i]==c){
                    return false;
                }
            }
        }
        return true;
    }
};

int main(){
  string a;
  cin>>a;
  cout<<Solution().lengthOfLongestSubstring(a);
  return 0;
}
