class Solution {
public:
 
    int maxProduct(vector<int>& nums) {
       
        // Initializing the variable 'ans' to store the maximum product
         int ans = 0; 
        
        // Nested loops to iterate through pairs of elements in the 'nums' array
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                
                // Calculating the product of (nums[i] - 1) and (nums[j] - 1)
                // and updating 'ans' to hold the maximum product found so far
                ans = max(ans, (nums[i] - 1) * (nums[j] - 1));
            }
        }
        
        return ans; 
    }
};

// Time = O(n2)                            space = O(1)


class Solution {
public:
    
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sorting the 'nums' array in ascending order
        
        int x = nums[nums.size() - 1]; // Getting the largest element
        int y = nums[nums.size() - 2]; // Getting the second largest element
        
        return (x - 1) * (y - 1); // Returning the product of (largest - 1) * (second largest - 1)
    }
};



class Solution {
public:
  
    int maxProduct(vector<int>& nums) {
        int biggest = 0;         // store the largest
        int secondBiggest = 0;   // store the second largest 
        
        for (int num : nums) {   // Iterating 
            if (num > biggest) {
                // If the current number is greater than 'biggest',
                // update 'secondBiggest' and 'biggest'
                secondBiggest = biggest;
                biggest = num;
            }
            else {
                // If the current number is not greater than 'biggest',
                // update 'secondBiggest' if necessary (keeping track of the second largest)
                secondBiggest = max(secondBiggest, num);
            }
        }
        
        return (biggest - 1) * (secondBiggest - 1); 
    }
};

// Time = O(n)                       space = O(1)
