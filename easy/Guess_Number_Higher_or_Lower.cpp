//from : https://leetcode.com/problems/guess-number-higher-or-lower/


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
        for(long long i=0,j=n;i<=j;){
            int tmp=guess((i+j)/2);
            if(0==tmp)
                return (i+j)/2;
            else if(1==tmp){
                i=(i+j)/2+1;
            }
            else{
                j=(i+j)/2-1;
            }
        }
        return 0;
    }
};
