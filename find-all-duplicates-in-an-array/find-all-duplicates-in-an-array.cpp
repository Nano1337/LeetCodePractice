#include <map>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicate;
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); i++){ //if nums[i] is already in the set, add to vector, else                                                   add to set
            if(s.count(nums[i])){
                duplicate.push_back(nums[i]);
            } else {
                s.insert(nums[i]);
            }
        }
        return duplicate;
    }
};