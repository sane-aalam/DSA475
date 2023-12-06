class Solution {
public:
    // Two pointer Algorithm used here 
    vector<int> runningSum(vector<int>& nums) {
        int tempVariable = 0;
        int sum = 0;
        for(int index = 0; index < nums.size(); index++){
            sum = sum + nums[index];
            nums[tempVariable] = sum;
            tempVariable++;
        }
        return nums;
    }
};