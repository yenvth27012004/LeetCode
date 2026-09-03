#include<iostream>
#include<stack>
#include<string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool check = true;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else{
                if(s[i] == ')' || s[i] == ']' || s[i] =='}'){
                    if(st.empty()) return false;
                        if(s[i] == ')'){
                            if(st.top() == '(')
                                st.pop();
                            else 
                                return false;}
                        if(s[i] == ']'){
                            if(st.top() == '[')
                                st.pop();
                            else 
                                return false;}
                        if(s[i]=='}'){
                            if(st.top() == '{')
                                st.pop();
                            else
                                return  false;
                        }
                    }
                }
            }

        return st.empty();
}
};
int main(){
    Solution s;
    string a;
    cout << "nhap vao chuoi: ";
    cin >> a;
    if(s.isValid(a))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}