class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // make unordered map of <int, int> representing type: amount
          std::unordered_map<int, int> m;

          // make int totalLen for storing global max length
          int totalLen = 0;
          int l = 0, r = 0;
          // while right is less than length of fruits array
          while(r < fruits.size()) {
              // add to unordered map and increment right
              m[fruits[r++]] += 1;
              // while number of elements in unordered map is greater than 2
              while(m.size() > 2) {
                // remove from left and increment left
                if(m[fruits[l]] == 1) {
                  m.erase(fruits[l]);
                } else {
                  m[fruits[l]]--;
                }
                l++;
              }
              // compare and take max length of previous and current
              totalLen = std::max(totalLen, r-l);
          }
          return totalLen;  
    }
};