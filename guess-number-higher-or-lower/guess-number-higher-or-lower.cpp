#include <cmath> 
using namespace std;
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:

    int guessNumber(int n) {
         int low = 1;
        int high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int res = guess(mid);
            if (res == 0)
                return mid;
            else if (res < 0)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
        // int beg = 0; 
        // int end = n; 
        // int mid, t;
        // while(beg <= end){
        //     mid = (beg + end)/2;
        //     t = guess(mid);
        //     if(t == 0) return mid;
        //     if(t < 0) end = mid-1;
        //     if(t > 0) beg = mid+1;
        // }
        // return 0;
    }
};