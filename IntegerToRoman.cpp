/*
 * @Author: Kanade
 * @Date: 2020-08-04 20:55:06
 * @LastEditTime: 2020-08-04 20:56:10
 * @Description: 
 */
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string r = "";
        int th, hu, te, on;
        th = num/1000;
        num-=th*1000;
        hu = num/100;
        num-=hu*100;
        te = num/10;
        num-=te*10;
        on = num;
        
        for(int i=0; i<th; i++)
            r.insert(r.end(), 'M');
        
        if(hu==9){
            r.insert(r.end(), 'C');
            r.insert(r.end(), 'M');
        }else if(hu>=5){
            int re = hu-5;
            r.insert(r.end(), 'D');
            for(int i=0; i<re; i++){
                r.insert(r.end(), 'C');
            }
        }else if(hu==4){
            r.insert(r.end(), 'C');
            r.insert(r.end(), 'D');
        }else{
            for(int i=0; i<hu; i++)
                r.insert(r.end(), 'C');
        }
        
        if(te==9){
            r.insert(r.end(), 'X');
            r.insert(r.end(), 'C');
        }else if(te>=5){
            int re = te-5;
            r.insert(r.end(), 'L');
            for(int i=0; i<re; i++){
                r.insert(r.end(), 'X');
            }
        }else if(te==4){
            r.insert(r.end(), 'X');
            r.insert(r.end(), 'L');
        }else{
            for(int i=0; i<te; i++)
                r.insert(r.end(), 'X');
        }
        
        if(on==9){
            r.insert(r.end(), 'I');
            r.insert(r.end(), 'X');
        }else if(on>=5){
            int re = on-5;
            r.insert(r.end(), 'V');
            for(int i=0; i<re; i++){
                r.insert(r.end(), 'I');
            }
        }else if(on==4){
            r.insert(r.end(), 'I');
            r.insert(r.end(), 'V');
        }else{
            for(int i=0; i<on; i++)
                r.insert(r.end(), 'I');
        }
        
        return r;
    }
};

int main(){
    int i{0};
    cin>>i;
    cout<<Solution().intToRoman(i);
    return 0;
}