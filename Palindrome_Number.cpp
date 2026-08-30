#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int org = x;
        long long rev = 0;
        if( x < 0 ) return false;
        while(x>0){
        int digit = 0;
        digit = x % 10;
        rev = rev*10 + digit;
        x= x/10; 
        } 
        if(rev == org) return true;
        else
        return false;

    } 
};
int main(){
    Solution s;
    int x;
    cin >> x;
    if(s.isPalindrome(x)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}