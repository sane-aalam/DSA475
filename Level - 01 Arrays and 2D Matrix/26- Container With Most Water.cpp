class Solution {
    public int maxArea(int[] height) {
        int left=0;
        int right=height.length-1;
        int Maxarea=0;
        while (left<right){
            //* fomula you should remember - DSA01
            // calculate -> prefix of the array
            // calculate -> postfix of the array
            // max(min(prefix,postfix)) - height(i)
            int minht=Math.min(height[left],height[right]);
            Maxarea=Math.max(Maxarea,(minht*(right-left)));
            if (height[left]<height[right]) left++;
            else right--;
        }
        return Maxarea;
    }
}