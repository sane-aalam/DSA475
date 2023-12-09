class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        for(int i = 0; i<nums.size(); i++){
            result[i] = abs(nums[i] * nums[i]);
        }

        // STL sort method used here 
        sort(result.begin(),result.end());
        return result;
    }
};