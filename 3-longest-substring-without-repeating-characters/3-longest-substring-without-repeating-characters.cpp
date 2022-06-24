class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, globalLen = 0; 
        std::unordered_map<int, int> m;  
        
        while(r < s.length()){
            m[s.at(r)] += 1;
            while(m[s.at(r)] > 1){
                if(m[s.at(l)] > 1){
                    m[s.at(l)] -= 1;
                } else{
                    m.erase(s.at(l));
                }
                l++;
            }
            r++;
            globalLen = std::max(globalLen, r-l);
        }
        
        return globalLen;
    }
};