You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

 

Example 1:

Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:

Input: nums = [1,1]
Output: [1,2]
 

Constraints:

2 <= nums.length <= 104
1 <= nums[i] <= 104



class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        int j = (n*(n+1))/2;
        int sum = 0;
        int a;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(i+1 != nums[i])
            {
                a = i;
            }
        }
        int z = j - sum;
        // cout<<z<<endl;
        v.push_back(nums[a]);
        v.push_back(nums[a]+z);
        return v;
    }
};
