
// learn today- prefix and postfix NEw concept 
//* concept -> upate the element by adding and multiply privous elmenet

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> prefix(n,1);
        vector<int> postfix(n,1);

        // `pre[i]` is the product of `nums[0] * nums[1] * ... * nums[i - 1]`
        for(int i = 1; i<n; i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        // `post[i]` is the product of `nums[i + 1] * nums[i + 2] * ... * nums[n - 1]`
        for(int i = n - 2; i>= 0; i--){
            postfix[i] = postfix[i+1] * nums[i+1];
        }

        // The product of any prefix or suffix of nums
        vector<int> result(n);
        for(int i = 0; i<n; i++){
            result[i] = prefix[i] * postfix[i];
        }
        return result;
    }
};