class Solution {
private:
    int solve(int n, vector<int> & dp){
        if(n <= 1){
            return n;
        }
        
        if(dp[n] != -1){
            return dp[n];
        }
        
        int PrivElement = solve(n-1,dp);
        int nextPrivElement = solve(n-2,dp);
        
        int FibonacciNumber = PrivElement + nextPrivElement;
        return FibonacciNumber;
    }
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
        int result = solve(n,dp);
        return result;
    }
};