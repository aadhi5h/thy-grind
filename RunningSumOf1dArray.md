# 1480 Running Sum of 1D Array:

Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
 

Constraints:

    1 <= nums.length <= 1000
    -10^6 <= nums[i] <= 10^6

# Solution:

[Code](febcodes\feb_02.cpp)

So this problem i thought of using iterators at first but i could not do it as expected in very first try.

I reopened the notebook and found out that we can access vectors like indexing array and hence used that approach with for loop.

I also initially set sum as first element as first element is same in output as input, and i could solve the problem easily in second try.