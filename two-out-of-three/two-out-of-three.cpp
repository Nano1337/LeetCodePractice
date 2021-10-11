#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    set<int> removeDuplicates(vector<int> v){ //returns set<int> that doesn't contain duplicate values
        set<int> s;
        //insert array elements into set
        for (int i = 0; i < v.size(); i++){

            //insert into set
            s.insert(v[i]);
        }
        return s;
    }
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> s1 = removeDuplicates(nums1);
        set<int> s2 = removeDuplicates(nums2);
        set<int> s3 = removeDuplicates(nums3);

        unordered_map<int, int> freq;
        set<int>::iterator it;
        vector<set<int>> sets = {s1, s2, s3};

        //make hashmap with num:freq pair
        for(int n = 0; n < sets.size(); n++){
            for(it = sets[n].begin(); it != sets[n].end(); ++it){
                freq[*it]++;
            }
        }

        vector<int> output;
        for(pair<int, int> element : freq){
            if(element.second >= 2) output.push_back(element.first);
        }
        
        return output; 
    }
};