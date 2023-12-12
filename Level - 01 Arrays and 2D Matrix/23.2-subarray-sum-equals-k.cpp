class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        int sum = 0;
        int count = 0;

        unordered_map<int,int> mpp;
        mpp.insert({0,1});

         for(int i=0;i<n;i++){
            sum = sum + nums[i];
        // checkout the hashmap this value is present then increment the counter 
            if(mpp.find(sum-k)!=mpp.end()){
            count = count  + mpp[sum-k];
            }
        // store the value of the using Frequency 
            mpp[sum]++;
        }
        return count ;
    }
};