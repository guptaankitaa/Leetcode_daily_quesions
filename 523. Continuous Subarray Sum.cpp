class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();    
        unordered_map <int,int> mp;
        
        int sum = 0;
        mp[0] = -1;
        
        for(int i=0; i<n; i++){
            sum+= nums[i];
            
            int remainder = sum%k;
            
            if(mp.find(remainder)!= mp.end()){
                if(i - mp[remainder] >= 2)
                return true;
            }
            else {
                mp[remainder]= i;
            }
        }
        return false;
    }
};
// initialize size with n
//taking unordered map storing reminder and index
//taking sum variable for addition 
//we store 0 in map and its index is -1
// for loop for adding nums[i] in sum variable 
// to find remainder simply we do sum % k  example(2 % 5 = 1)
//check if remainder is present in map  
//if yes then we check size ..... current index - remainder >= 2 (given in que)
//return true
// else we insert in map
//in loop will not get true then we return false
