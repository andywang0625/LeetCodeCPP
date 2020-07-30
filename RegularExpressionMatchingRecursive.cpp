/*
 * @Author: Kanade
 * @Date: 2020-07-29 22:47:53
 * @LastEditTime: 2020-07-29 22:48:33
 * @Description: Time Limit Exceeded, so DP is required.
 */ 

class Solution {
public:
    bool isMatch(string s, string p) {
        //bool dp[s.length()+1][p.length()+1];
        if(p.length() == 0)
            return !(bool)s.length();
        if(p.length() >= 2 && p[1] == '*')
            return (
                (isMatch(s, p.substr(2))
                 || (
                     s.length() && isMatch(s.substr(1),p)
                 )
                &&(
                    s.length() && (s[0] == p[0] || p[0] == '.')
                  )
                )
            );
        else
            return (s.length() && (p[0] == s[0] || p[0] == '.') ) && isMatch(s.substr(1), p.substr(1));
    }
};