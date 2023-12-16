
 //-1: Your guess is higher than the number I picked (i.e. num > pick).
// 1: Your guess is lower than the number I picked (i.e. num < pick).
// 0: your guess is equal to the number I picked (i.e. num == pick).

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        int mid = start + (end - start)/2;

        while(start <= end){
            if(guess(mid) == 0){
                return mid;
            }else if(guess(mid) == 1){
                start = mid + 1;
            }else{
                end = mid -1;
            }
            mid = start + (end - start)/2;
        }
        return -1;
    }
};