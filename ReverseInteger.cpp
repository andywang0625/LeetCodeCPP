/*
 * @Author: Kanade
 * @Date: 2020-07-27 21:13:21
 * @LastEditTime: 2020-07-27 21:14:08
 * @Description: 
 */ 

class Solution {
public:
    int reverse(int x) {
        int ans{0};
        while(x){
            int i = x % 10;
            x/=10;
            if(ans>INT_MAX/10||ans<INT_MIN/10)
                return 0;
            ans = ans * 10 + i;
        }
        return ans;
    }
};
int main(){
    int a{0};
    cin>>a;
    cout<<Solution().reverse(a);
}
