//To find the max subarray maximum sum we can use Kadane's algorithm which is an efficient way to solve this problem in O(n) time complexity. The idea is to iterate through the array and keep track of the current sum of the subarray. If the current sum becomes negative, we reset it to zero. We also keep track of the maximum sum encountered so far.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxSum=nums[0];
      int currSum=nums[0];
      for (int i = 1;i<nums.size(); i++) {
        //Either we start a new subarray from the current element or we continue the existing subarray by adding the current element to it. We take the maximum of these two options to ensure that we are always considering the best possible subarray at each step.
        currSum=max(nums[i], currSum + nums[i]);
        maxSum= max(maxSum, currSum);
      } 
      return maxSum;
    }
};