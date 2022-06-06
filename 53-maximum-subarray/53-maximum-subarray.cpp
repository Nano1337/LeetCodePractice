class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Use Kadane's algorithm for iterative solution
        // two int variables to store currentSum and maxSum
        int currentSum = 0; 
        int maxSum = INT_MIN;
        // O(n) through vector once:
        for(size_t i = 0; i < nums.size(); ++i) {
            // if element at current index is greater than current subarray than added to it
            // then start new subarray
            currentSum = std::max(currentSum + nums[i], nums[i]);
            
            // compare currentSum and previous maxSum, save bigger value
            maxSum = std::max(maxSum, currentSum);
            
        }
            
        // return maxSum
        return maxSum;
    }
};

/* test cases: 
1. normal test case
2. singleton test case
3. entire array is subarray
*/

// additional test cases
// input: [-2, -3, -4, -1, -3, -5, -2, -6, -3]
// output: [-1] has max sum of -1
// edge case: all values are negative