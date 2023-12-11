class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i = 0;
        int j = 0;
        
        long sum = 0;
        long maxisum = INT_MIN;
        
        while(j < N){
            
            // case-1 calculation part
            sum = sum + Arr[j];
            
            // case-2 window size part 
            if(j - i + 1 < K){
                j++;
            }
            else if(j - i + 1 == K){
                maxisum = max(maxisum,sum);
                sum = sum - Arr[i];
                i++;
                j++;
            }
        }
        return maxisum;
    }
};