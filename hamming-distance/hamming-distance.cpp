#include <unordered_set>
#include <unordered_map>
#include <bitset>
class Solution {
public:
    int hammingDistance(int x, int y) {
        unordered_map<int, int> map;
    
        //makes set of bits from integer and buffers with leading zeroes
        bitset<32> binaryx(x);
        bitset<32> binaryy(y);
        string stringx = binaryx.to_string();
        string stringy = binaryy.to_string();

        //use hashmap to store key:value >> position:sum where sum == 1 is a difference
        for(int i = 0; i < stringx.length(); i++){
            int sum = (stringx[i] - '0') + (stringy[i] - '0');
            map.insert({i, sum});
        }
        
        //iterate through values and count the number of 1s
        int count = 0;
        for (auto const& x : map){
            if(x.second == 1){
                count++;
            }
        }
        return count; 
    }
};