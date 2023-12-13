class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int zeroEqualChcker = 0;
        sort(nums.begin(),nums.end());
        // without sort not applicable for two pointer algorithm
        vector<vector<int>> output;
        set<vector<int>> s; //  set must not contain duplicate triplets.

        int n = nums.size();

        for(int i = 0; i < n; i++){
            int start = i + 1;
            int end = n - 1;

            while(start < end){
                int x = nums[i];
                int y = nums[start];
                int z = nums[end];

                int sum = x + y + z;
                if(sum == zeroEqualChcker){
                    // set has power to duplicate (3,3,3) convert into the single (3) 
                    //* update the code 
                    // s.insert({nums[i], nums[start],nums[end]});
                    s.insert({x,y,z}); 
                    // we have increase the start, decrease the end variable 
                    start++;
                    end --;
                }else if(sum < zeroEqualChcker){
                    start++;
                }else{
                    end--;
                }
            }
        }

        for(auto sumThree : s){
            output.push_back(sumThree);
        }
        return output;
    }
};