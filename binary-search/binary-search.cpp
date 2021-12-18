class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a=0, b=nums.size()-1, mid;
        if(nums[a] == target) cout << a;
        if(nums[b] == target) cout << b;
        while(b-a>-1){
            mid = a + (b-a)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) b=mid-1;
            else a=mid+1;
        }
        return -1;
    }
};