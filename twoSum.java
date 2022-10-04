//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int arr[] = new int[2];
        int n1,n2;
        for(int i=0;i<nums.length;i++) {
            n1=nums[i];
            for(int j=i+1;j<nums.length;j++) {
                n2=nums[j];
                if(n1+n2 == target) {
                    arr[0]=i;
                    arr[1]=j;
                }
            }
        }
        return arr;
    }
}
