/*
 * @Author: Kanade
 * @Date: 2020-07-26 20:42:51
 * @LastEditTime: 2020-07-27 23:40:12
 * @Description: 
 */ 
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        string ans;
        int currentRow{0}, currentCol{0};
        bool goingDown = true;
        for(int i=0; i<numRows;i++){
            currentRow=0;
            currentCol=0;
             for(char c:s){
                 if(currentRow==i)
                     ans.push_back(c);
                 if(currentRow<numRows-1&&goingDown){
                     currentRow+=1;
                 }else if(currentRow==numRows-1&&goingDown){
                     goingDown=0;
                     currentRow--;
                     currentCol++;
                 }else if(!goingDown&&currentRow!=0){
                     currentRow--;
                     currentCol++;
                 }else if(!goingDown&&currentRow==0){
                     goingDown=1;
                     currentRow++;
                 }
             }
        }
        return ans;
    }
};
int main(){
    int rows{0};
    string s;
    cin>>s;
    cin>>rows;
    Solution().convert(s, rows);
}