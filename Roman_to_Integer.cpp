//convert Roman to Integer
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int value(char c) {
        switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int total = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            int cur =value(s[i]);
            if( i < s.size()-1){
                int net = value(s[i+1]);
                if (cur < net) {
                    total -= cur;
                }
                else {
                    total += cur;
                }
            }
            else {
                total += cur;
            }
    }
    return total;
    }
};

int main(){
    Solution s;
    string a;
    cout << "nhap vao chuoi: ";
    cin >> a;
    cout << s.romanToInt(a) << endl;
}