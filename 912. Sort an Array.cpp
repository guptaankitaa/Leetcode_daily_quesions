class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
          unordered_map<int, int> mp;
    
    for(int &nums : nums){
        mp[nums]++;
    }
    
	int minE = *min_element(nums.begin(), nums.end());
	int maxE = *max_element(nums.begin(), nums.end());
    
	int i = 0;
    
    for(int num = minE; num <= maxE; num++){
        while(mp[num] > 0){
            nums[i] = num;
            i++;
            mp[num]--;
        }
    }
    return nums;
    }
};

//map to store no and frequency
//find min and max element
//for loop to start from min element till max elememt
//and push the elemnt in num and decrease the frequency of that elemnt in map
