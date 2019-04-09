#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
        int counterL=0, counterR=0;
        string SS="";
        int pL=0, pR=0;
        while(S[pR]!='\0'){
            //cout<<S[pR]<<endl;
            if(S[pR]=='('){
                counterL++;
                pR++;
            }else{
                counterR++;
                pR++;
            }
            if(counterL==counterR){
                counterL=0;
                counterR=0;
                SS+=removeParentheses(S.substr(pL,pR-pL));
                pL=pR;
            }
        }
        return SS;
    }
    string removeParentheses(string s){
        cout<<"SUB:  "<<s.substr(1, s.length())<<endl;
        return  s.substr(1, s.length()-2);
    }
};

string stringToString(string input) {
    string result;
    for (int i = 1; i < input.length() -1; i++) {
        char currentChar = input[i];
        if (input[i] == '\\') {
            char nextChar = input[i+1];
            switch (nextChar) {
                case '\"': result.push_back('\"'); break;
                case '/' : result.push_back('/'); break;
                case '\\': result.push_back('\\'); break;
                case 'b' : result.push_back('\b'); break;
                case 'f' : result.push_back('\f'); break;
                case 'r' : result.push_back('\r'); break;
                case 'n' : result.push_back('\n'); break;
                case 't' : result.push_back('\t'); break;
                default: break;
            }
            i++;
        } else {
          result.push_back(currentChar);
        }
    }
    return result;
}

int main() {
    string line;

        string S;
        cin>>S;

        string ret = Solution().removeOuterParentheses(S);

        string out = (ret);
        cout << out << endl;
    return 0;
}
