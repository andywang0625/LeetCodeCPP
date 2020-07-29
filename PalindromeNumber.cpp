/*
 * @Author: Kanade
 * @Date: 2020-07-28 22:38:10
 * @LastEditTime: 2020-07-28 22:39:25
 * @Description: 
 */ 
#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long xo = x;
        long newNumber{0};
        if(x<0||x%10==0&&x!=0)
            return false;
        while(xo>newNumber){
            newNumber*=10;
            newNumber+=x%10;
            x/=10;
        }
        return xo==newNumber;
    }
};

int main(){
    int i{0};
    cin>>i;
    cout<<Solution().isPalindrome(i);
}