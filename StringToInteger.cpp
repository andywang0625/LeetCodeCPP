/*
 * @Author: Kanade
 * @Date: 2020-07-27 22:11:17
 * @LastEditTime: 2020-07-27 23:39:22
 * @Description: 
 */ 
#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    int myAtoi(string str) {
        int ans{0};
        bool ne{false};
        bool preWord{false};
        bool lastS{false};
        for(auto c:str){
            if(preWord&&!isNumber(c))
                return ne?ans*(-1):ans;
            if(c==43){
                preWord=true;
                continue;
            }
            if(ans&&c==45)
                return ne?ans*(-1):ans;
            if((c!=' '||(c==' '&&ans))&&c!=45&&(c<48||c>57))
                return ne?ans*(-1):ans;
            if(preWord&&c==45)
                return ne?ans*(-1):ans;
            if(c==45&&!ans){
                preWord=true;
                ne=true;   
            }
            if(ans>=INT_MAX/10)
                if(c-48>7)
                    return ne?INT_MIN:INT_MAX;
            if((long long)ans*10>INT_MAX)
                return ne?INT_MIN:INT_MAX;
            if(c>=48&&c<=57){
                ans*=10;
                ans+=c-48;
                preWord=true;
            }
        }
        return ne?ans*(-1):ans;
    }
    bool isNumber(char c){
        if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0')
            return true;
        else
            return false;
    }
};
int main(){
    string a;
    cin>>a;
    cout<<Solution().myAtoi(a);
    return 0;
}