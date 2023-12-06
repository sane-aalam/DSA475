class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /// create the temp Array 
        vector <int> tempVector;
        int i = 0;
        int j =0;

        // check out the which one array element is smaller 
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                tempVector.push_back(nums2[j]);
                j++;
            }else {
            tempVector.push_back(nums1[i]);
                i++;  
            }   
        }
        
        // remaing elements of the array 1 insert the vector
        while(i<m){
            tempVector.push_back(nums1[i]);
                i++; 
        }

        // remaing elements of the array 2 insert the vector
        while(j<n){
            tempVector.push_back(nums2[j]);
                j++;           
        }
        
        // copy into the first array1 the vector
        nums1 = tempVector;     
    }
};