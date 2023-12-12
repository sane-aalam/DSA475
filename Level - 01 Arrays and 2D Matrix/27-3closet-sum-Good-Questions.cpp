class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int preCalcaluteGAP = INT_MAX;
        // we have to sort the array - We can apply two pointer Algorithm
        sort(nums.begin(),nums.end()); 

        int n = nums.size();
        int ans = 0; // global variable - access anywhere 
        for(int i = 0; i<n-2; i++){
            int start = i+1;
            int end = n-1;
            // two pointer Algorithms 
    
            while(start<end){
                int x = nums[i];
                int y = nums[start];
                int z = nums[end];

                int  sum = x + y + z;

                if(sum < target){
                    // we have to minimize the gap,
                    // if preCalcaluteGAP is Then we have to mininize the gap
                    // we want to mini
                    int currentGAP = abs(target-sum);
                    if(currentGAP < preCalcaluteGAP){
                        preCalcaluteGAP = currentGAP;
                        ans = sum;
                    }
                    start++;
                }else if(sum > target){
                    int currentGAP = abs(target-sum);
                    if(currentGAP < preCalcaluteGAP){
                        preCalcaluteGAP = currentGAP;
                        ans = sum;
                    }
                    end--;
                }else{
                    return sum;
                }
            }
        }
        return ans;
    }
};