# [287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/description/)

`Medium`

Given an array of integers `nums` containing `n + 1` integers where each integer is in the range `[1, n]` inclusive.

There is only __one repeated number__ in `nums`, return this repeated number.

You must solve the problem __without__ modifying the array `nums` and uses only constant extra space.

 
```
Example 1:

Input: nums = [1,3,4,2,2]
Output: 2

Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
 
```
__Constraints:__

- `1 <= n <= 10^5`
- `nums.length == n + 1`
- `1 <= nums[i] <= n`
- All the integers in `nums` appear only once except for precisely one integer which appears two or more times.
 

__Follow up:__
- How can we prove that at least one duplicate number must exist in `nums`?
- Can you solve the problem in linear runtime complexity?