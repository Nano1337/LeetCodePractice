class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int a=0, b=nums.size()-1;
        vector<int> squares;
        while(a<=b){
            if(abs(nums[a])<abs(nums[b])){
                squares.insert(squares.begin(), pow(nums[b], 2));
                b--;
            }else{
                squares.insert(squares.begin(), pow(nums[a], 2));
                a++;
            }
        }
        return squares;
    }
};