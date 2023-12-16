class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int> map;

// store the couting into the map data struture 
        for(int i=0; i<n; i++){
            map[nums[i]]++;
        }

// FIND the number which are occaury more than one time into the map data structure 
        int ans;
        for(auto it: map){
            if(it.second > 1){
                ans = it.first;
            }
        }

        return ans;     
    }
};