// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) { //implementation of binary search
        int beg = 1; 
        int& end = n; 
        while (beg <= end) {
            int mid = beg + (end-beg)/2;
            //if the mid value is true and mid-1 is false, then you know mid is the first error
            if(isBadVersion(mid) && !isBadVersion(mid-1)){ //or bc can have only one mid value
                return mid;
            } else if(isBadVersion(mid-1)) {
                end = mid - 1;
            } else{
                beg = mid + 1;
            }
        }
        return -1;
    }
};