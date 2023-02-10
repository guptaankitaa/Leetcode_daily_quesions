class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      int ans = 0;
      map<int,int>mp;
      int i =0 ,j =0,n = fruits.size();
      while(i<n)
      {
        mp[fruits[i]]++;
      while(mp.size()>2)
      {
       if(mp[fruits[j]] == 1)
       {
        mp.erase(fruits[j]);
       }
        else
        {
        mp[fruits[j]]--;
        }
        j++;
      }
       ans = max(i-j+1,ans);
       i++;
    }
    return ans;
    }
};

//here we make ans for answer and map for basket and 2 variable i j to iterate window
//pushing fruits in basket and also check condition if size of fruit is greater than 2 then we will erase the fruit whose value is 1
