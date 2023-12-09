class Solution {
    public int[] leftRightDifference(int[] nums) {

        int n = nums.length;

        // prefix of the array
        int[] leftSum = new int[n];

        for (int i = 1; i < n; i++) {
            leftSum[i] = leftSum[i - 1] + nums[i - 1];
        }

        // postfix of the array
        int[] rightSum = new int[n];
        for (int i = n - 2; i >= 0; i--) {
            rightSum[i] = rightSum[i + 1] + nums[i + 1];
        }

        // outfix of the array 
        int ans[] = new int[n];
        for (int i = 0; i < n; i++) {
            ans[i] = Math.abs(leftSum[i] - rightSum[i]);
        }
        return ans;
    }
}