class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int negative = -1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] < 0)
            {
                negative = i;
            }
            else
            {
                break;
            }
        }
        vector<int> ans;
        int i = negative;
        int j = negative + 1;
        while(i >= 0 || j < n)
        {
            if(i < 0)
            {
                ans.push_back(nums[j] * nums[j]);
                j++;
            }
            else if(j == n)
            {
                ans.push_back(nums[i] * nums[i]);
                i--;
            }
            else if(nums[i] * nums[i] > nums[j] * nums[j])
            {
                ans.push_back(nums[j] * nums[j]);
                j++;
            }
            else
            {
                ans.push_back(nums[i] * nums[i]);
                i--;
            }
        }
        return ans;
    }
};
