class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        // two pointer approach
        int l = 0, r = 0, sum = 0, size = nums.size(), len = INT_MAX;
        
        // while there still exist values to the right, increment
        while(r < size) {
            sum += nums[r++];
            while(sum >= target){
                len = std::min(len, r-l);
                sum -= nums[l++];
            }
        }

        return len == INT_MAX ? 0 : len;
    }
};