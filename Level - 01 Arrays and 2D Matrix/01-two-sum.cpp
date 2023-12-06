/*
so approach used here->
1.you can store the index value into the vectore and actual element also
2.sort the vector
3. apply two pointer algorithm
*/

// #RESTART

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>> arr;
        
        for(int i = 0; i<nums.size(); i++){
            arr.push_back({nums[i],i});
        }
        
        sort(arr.begin(),arr.end());
        
        // set the both of the pointer
        // apply two poitner Algorithm
        int start = 0;
        int end = nums.size()-1;
        
        while(start < end){
            int TwoSum = arr[start].first + arr[end].first;
            
            if(TwoSum == target){
                return {arr[start].second,arr[end].second};
            }else if(TwoSum < target){
                start++;
            }else{
                end--;
            }
        }
        // Not fount index - return Empty
        // you can return Empty Vector
        return {};
    }
};