
// appraoches all -> couting + hashmap + math + xor approach 

// MISSING NUMBER (NUMBER GUM HO GAYA THA, MAINE DHOONDH LIYA)

// Intuition
// Dost ne bola XOR operation use kar, to kar diya.

// Approach
// Kaafi simple hai. It takes two numbers as operands and does XOR on every bit of two numbers.
// The result of XOR is 1 if the two bits are different. XOR ke baare mein thoda khud se bhi padhoge to samajh jaaoge.
// Zyaada waqt nahi lagega.

class Solution {
public: 
    // code - 1
    int missingNumber(vector<int>& nums) {
        int ElementXor = nums.size();
        int mask = 0;
        for(int i= 0; i<nums.size(); i++){
            mask = mask ^ i;
            ElementXor = ElementXor ^ nums[i];
        }
        int result = mask ^ ElementXor;
        return result;
    }
    // code - 2
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for(int i = 0; i<nums.size(); i++){
            totalSum += nums[i];
        }

        int numberSum = 0;
        for(int i = 0; i<=n; i++){
            numberSum += i;
        }
        return numberSum - totalSum;
    }
};