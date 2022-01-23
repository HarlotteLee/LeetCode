class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int n = nums.size();
       if(n == 0)
       {
           return 0;
       } 
       int start = 0;
       int end = 0;
       int sum = 0;
       int ans = INT_MAX;
       while(end < n)
       {
           sum += nums[end];
           while(sum >= target)
           {
               ans = min(ans, end - start + 1);
               sum -= nums[start];
               start++;
           }
           end++;
       }
       return ans == INT_MAX? 0 : ans;
    }
};
