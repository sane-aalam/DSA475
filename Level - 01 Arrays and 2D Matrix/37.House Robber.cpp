#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Solution{
    private:
    int sticklerThief(int arr[],int index,vector<int> & dp){
        
        if(index == 0){
            return arr[0];
        }
        
        if(index < 0){
            return 0;
        }
        
        // memorization of the array
        if(dp[index] != -1){
            return dp[index];
        }
        
        int twoConsecutive = arr[index] + sticklerThief(arr,index-2,dp);
        int OneConsecutive = 0 + sticklerThief(arr,index-1,dp);
        
        int result = max(twoConsecutive,OneConsecutive);
        // store the into memorization of the array
        return dp[index] = result;
    }
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int> dp(n+1,-1);
        return sticklerThief(arr,n-1,dp);
    }
};

int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
