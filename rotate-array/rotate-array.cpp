class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        auto a = nums.begin() + nums.size()-k;
        auto b = nums.begin() + nums.size();
        vector<int> subvec(a, b);
        subvec.insert(subvec.end(), nums.begin(), nums.end()-k);
        nums = subvec;
    }
};