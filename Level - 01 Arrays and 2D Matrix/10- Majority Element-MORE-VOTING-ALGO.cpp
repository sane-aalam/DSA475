class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
      // Moore's voting algoritm 
      int n = nums.size();
      int count = 0;
      int element;

      for(int i = 0; i<n; i++){
          if(count == 0){
              count = 1;
              element = nums[i];
          }else if(element == nums[i]){
              count ++;
          }else{
              count --;
          }
      }

    int tempIncrement = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == element) 
            tempIncrement++;
    }

    if (tempIncrement > (n / 2)) 
        return element;
    else
       return -1;
    }
};