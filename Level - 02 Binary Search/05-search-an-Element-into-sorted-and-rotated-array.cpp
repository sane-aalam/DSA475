class Solution {
private:
    int miniElement(vector<int>&arr,int n){
        int start = 0;
        int end = n-1;
        int mid = start + (end - start)/2;
        
        while(start < end){
        if (arr[mid] >= arr[0]){
           start = mid + 1;
           }
           else{
               end = mid;
           }
           mid = start + (end - start) / 2;
        }
        return start;
    }
    // binary serach Function 
    int BinarySearch(vector<int> arr,int low, int high, int key){
        
        int start = low;
        int end = high;
        
        int mid = start + (end - start)/2;
        
        while(start <= end){
            if(arr[mid] == key){
                return mid;
            }else if(arr[mid] < key){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        
         //complete the function to help the minimum Element index value 
        // called pivot index value 
        // on the basic of the pivot index value array,we can clear understand Two sorted array
        // Now, we can apply binary search simple 
        int n = nums.size();
        int pivotindex = miniElement(nums,n);
        
        // result index value
        int index = 0;
        // last part of the sorted array 
        if(nums[pivotindex] <= target && target <= nums[n-1]){
            index =  BinarySearch(nums,pivotindex,n-1,target);
        // first part of the sorted array into 
        }else{
            index = BinarySearch(nums,0,pivotindex-1,target);
        }
        return index;
    }
};






