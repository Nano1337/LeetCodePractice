class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty() || nums.size()==0) return 0;
        int a=0, b=nums.size()-1, m; 
        while(a < b){
            m = a + (b-a)/2;
            if(nums[m] == target) return m; 
            if(nums[m] > target) b = m; 
            else a = m+1;
        }
        return  nums[a] < target ? a + 1: a;
    }
};