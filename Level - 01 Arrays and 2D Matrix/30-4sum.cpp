class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
      
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j<n; j++){

                //------------ Two pointer Algorithm Apply EASLY---------
                int start = j+1;
                int end = n - 1;
                while(start < end){
                      //by writing below 4 statement this way it will not give runtime error
                      // optimization of the code 
                    long long int sum = nums[i];
                    sum += nums[j];
                    sum += nums[start];
                    sum += nums[end];

                    if(sum == target){
                        st.insert({nums[i],nums[j],nums[start], nums[end]});
                        start++;
                        end--;
                    }else if(sum < target){
                        start++;
                    }else{
                        end--;
                    }
                }
            }
        }

        // we have to return 
        // Input: nums = [2,2,2,2,2], target = 8
        // Output: [[2,2,2,2]]
        vector<vector<int>> result;
        for(auto quadruplets : st)
            result.push_back(quadruplets);
        return result;
    }
};