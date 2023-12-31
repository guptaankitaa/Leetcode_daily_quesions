class Solution {
    
    public:
    
    bool fun(int i,int N,int coins[],int &sum,vector<vector<int>> &dp)
    {   
        
        if(i==N)
        {   
            if(sum!=0)
            {   
                if(sum%20==0 || sum%24==0)
                    return 1;
            }
            return 0;
        }
        
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        bool t=0,nt=0;
        sum+=coins[i];
        t=fun(i+1,N,coins,sum,dp);
        sum-=coins[i];
        nt=fun(i+1,N,coins,sum,dp);
        
        return dp[i][sum]=t||nt;
    }
    
    int isPossible(int N , int coins[]) 
    {
        int sum=0;
        for(int i=0;i<N;i++)
            sum+=coins[i];
        if(sum==2024)
            return 1;
        vector<vector<int>> dp(N+1,vector<int>(sum+1,-1));
        sum=0;
        return fun(0,N,coins,sum,dp);
    }
    
};
