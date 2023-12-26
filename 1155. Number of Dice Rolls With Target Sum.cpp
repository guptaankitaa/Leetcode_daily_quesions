class Solution {
public:
    long M = 1e9+7;
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> t(n+1, vector<int>(target+1));
        
        //t[i][j] = total ways to obtain j from exactly i dices
        
        t[0][0] = 1; 
        /*
            if(n == 0 && target == 0) we have found the target with all dices
            Or, understand it like this : 
            To obtain target 0 with 0 dices, how many ways  : 1
        */
        
        for(int i = 1; i <= n; i++) { //coin size loop (from coin change-2)
            for(int j = 1; j<= target; j++) { //target loop (from coin change-2)
                
                //Now since coin (here dice) has faces, so we need a loop for that too
                for(int f = 1; f <= k; f++) {
                    //face value should be always <= target
                    //so,
                    if(f <= j) {
                        t[i][j] = (t[i][j] + t[i-1][j-f])%M;
                    }
                }
            }
        }
        
        return t[n][target];
        
    }
};

//T.C : O(n*target*k)
//S.C : O(n*target)
