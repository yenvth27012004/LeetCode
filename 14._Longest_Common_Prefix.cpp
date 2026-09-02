#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string shortest = strs[0];
        int tmp = 0;
        string longest ="";
        bool kt = false;
        char c = shortest[0];
        for(int i = 0; i<strs.size(); i++){
            if (shortest.size() > strs[i].size())
            shortest = strs[i];
        }
        for(int j = 0; j< shortest.size(); j++ ){
            char c = shortest[j];
            tmp = 0;
            for(int i= 0; i< strs.size(); i++){
                if(c == strs[i][j]){
                    tmp +=1;
                }
                else {
                kt = true;
                break;
            } 
            }
            if (kt == true )
            break;
            if ( tmp == strs.size())
                longest += c;
        }
        return longest;
    }
};

int main(){
    Solution str;
    vector<string> strs(3);
//  vector<string> strs = {"flower","flow","flight"};
    cout << "Enter the 3 strings: ";
    cin >> strs[0] >> strs[1] >> strs[2];
    cout <<"The longest common prefix is: " << str.longestCommonPrefix(strs) << endl;
    return 0;
}