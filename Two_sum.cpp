#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> kq;
        for(int i=0; i< nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    kq.push_back(i);
                    kq.push_back(j);
                } 
            }
        } return kq;
    } 
};
int main(){
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
} 