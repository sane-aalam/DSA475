
// Bruthforce,we can use Linear Search Algorithm (Easy to use) but high time complexity
//* Binary search 
// - always apply,when given array is sorted Then you can apply binary search 
// - take 0(logN) time complexity 
// - fast than linear serach 
// - most of problems of leetcode solved using this algorithm

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        // calcalute the middle value 
        int mid = start + (end - start)/2;
        
        while(start <= end){
                if(nums[mid] == target){
                    return mid;
                }else if(nums[mid] < target){
                    start = mid + 1;
                }else{
                    end = mid - 1;
                }
            // we have to update the middle,becuase we have updated the start, end value
            mid = start + (end - start)/2;
        }
        // not present, then 
        return -1;
    }
};