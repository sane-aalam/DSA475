class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int rightsum = 0;
        for(int i = 0; i<nums.size(); i++){
            rightsum = rightsum + nums[i];
        }

        int leftsum = 0;
        for(int i = 0; i<nums.size(); i++){
            rightsum = rightsum - nums[i];

// we got the pivot index = The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
            if(leftsum == rightsum){
                return i;
            }
            leftsum = leftsum + nums[i];
        }
        return -1;  
    }
};