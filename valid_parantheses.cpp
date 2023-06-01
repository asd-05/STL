/* Anish Deshpande */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map <char, int> symbols = {{'{',-1},{'(',-2},{'[',-3},{'}',1},{')',2},{']',3}};
    bool isValid(string s) {
        stack <char> st;
        for (char bracket: s){
            if(symbols[bracket]<0){
                st.push(bracket);
            }else{
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(symbols[top] + symbols[bracket] != 0) return false;
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
};

int main() {

    

    return 0;
}