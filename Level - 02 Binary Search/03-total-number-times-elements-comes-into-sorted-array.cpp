class Solution {
private:
   int FirstPostion(vector<int> & nums, int target){
       int start = 0;
       int end = nums.size() - 1;

       int result1 = -1;
       int mid = start + ( end - start)/2;

       while(start <= end){
            // case-1 if your element is equal to target value 
            if(nums[mid] == target){
                result1 = mid;
                end = mid - 1; // we have to find first position 
            }
            // case-2 if your element is less to target value
            else if(nums[mid] < target){
                start = mid + 1;
            }else{
            // case-3 if your element is greater to target value
                end = mid - 1;
            }
         
       
            mid = start + ( end - start)/2;
       }
       return result1;
   }
   int LastPostion(vector<int> & nums, int target){
       int start = 0;
       int end = nums.size() - 1;

       int result1 = -1;
       int mid = start + ( end - start)/2;

       while(start <= end){
            // case-1 if your element is equal to target value 
            if(nums[mid] == target){
                result1 = mid;
                start = mid + 1; // we have to find last position 
            }
            // case-2 if your element is less to target value
            else if(nums[mid] < target){
                start = mid + 1;
            }else{
                 // case-3 if your element is greater to target value
                end = mid - 1;
            }
           
         mid = start + ( end - start)/2;
       }    
       return result1;
   }
public:
    vector<int> TotalTimes(vector<int>& nums, int target) {
        int result1 = FirstPostion(nums,target);
        int result2 = LastPostion(nums,target);
        
        if(result1 == -1 && result2 == -1){
            return 0;
        }else{
            // last - first + 1 - formula used here 
            int final_distance = result2 - result1 + 1;
            return final_distance;
        }
    }
};