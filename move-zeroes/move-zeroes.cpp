class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=0,b=0,c;
        //if doesn't have 0s
        if(nums.size()==0){
            a=0;
        } else{
            while(b<nums.size()){
            if(nums[b]!=0){
                c = nums[a];
                nums[a] = nums[b];
                nums[b] = c;
                a++;
            }
            b++;
        }
        }
    }
};