class Solution {
public:
    int findSpecialInteger(vector<int>& nums) {
       int n = nums.size();
       if(n==1)return 1;
       int ans ;
       int quarter = n/4;
       for(int i = 0 ;i < n - quarter;i++)
       {
           if(nums[i] == nums[i+quarter])
           {
               ans = nums[i];
           }
       } 
       return ans;
    }
};
