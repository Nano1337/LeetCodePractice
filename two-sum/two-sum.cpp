#include <map> 
using namespace std; 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        
        for(int i = 0; i < nums.size(); i++){
            m.insert({nums[i], i});
        }
        
        for(int j = 0; j < nums.size(); j++){
            if(m.count(target - nums[j]) == 1 && j != m[target - nums[j]]){
                return {j, m[target - nums[j]]};
            } 
            
        }
        return {};
    }
};