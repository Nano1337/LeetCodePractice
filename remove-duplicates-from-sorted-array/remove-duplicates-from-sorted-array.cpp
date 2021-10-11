class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int counter = 0;
        if(nums.size() == 0){
            return 0;
        }
        for(int i = 1; i < nums.size(); i++){
            if(nums[counter] != nums[i]){
                nums[++counter] = nums[i]; 
            }
        }
        return counter+1;
    }
};