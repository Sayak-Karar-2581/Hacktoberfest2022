//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

class Solution {
	public static void main(String[] args) {
		Solution solution = new Solution();
		
		int nums[] = new int[]{ 1, -2, -4, 5};
		int target = -6;
		
		int twoSumNumberIndices[] = solution.twoSum(nums, target);
		
		if(twoSumNumberIndices == null) {
			System.out.println("No numbers found that sum upto " + target);
		}else {
			System.out.printf("Number %d (at index %d) and %d (at index %d) sum upto %d\n", 
					nums[twoSumNumberIndices[0]], twoSumNumberIndices[0], nums[twoSumNumberIndices[1]], twoSumNumberIndices[1], target);
		}
	}
	
	public int[] twoSum(int[] nums, int target) {
        int arr[] = null;
        
        int number1, number2, lengthOfArray = nums.length;
        
        for(int i = 0; i < lengthOfArray; i++) {
            number1 = nums[i];
            
            for(int j = i + 1; j < lengthOfArray; j++) {
                number2 = nums[j];
                if(number1 + number2 == target) {
                    arr = new int[] {i, j};
                    break; 
                }
            }
        }
        return arr;
    }
}
