
// Given an array Arr[] of N integers. 
// Find the contiguous sub-array(containing at least one number)
// which has the maximum sum and return its sum.

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long currentsum = 0;
        long long maxsum = INT_MIN;
        
        for(int i = 0; i<n; i++){
            currentsum = currentsum + arr[i];
            maxsum = max(maxsum,currentsum);
            if(currentsum < 0){
                currentsum = 0;
            }
        }
        return maxsum;
    }
};