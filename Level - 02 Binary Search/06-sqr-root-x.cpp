class Solution {
public:
    int mySqrt(int x) {
        long long start = 0;
        long long end = x;
        
        long long mid = start + (end - start)/2;
        
        long long result = -1;
         long long squreValue = 0;
        
        while(start <= end){
             squreValue = mid * mid;
            if(squreValue == x){
                return mid;
            }else if(squreValue < x){
                result = mid;
                // store becasue, we want to closed (nearest integer value)
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return result;
    }
};