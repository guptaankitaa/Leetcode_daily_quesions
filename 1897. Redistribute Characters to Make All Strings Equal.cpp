class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char, int> mp;

        for(string &word : words){

            for(char &ch : word){
                mp[ch]++;
            }
        }

        for(auto &it : mp){
            int freq = it.second;
            if(freq % n != 0){
                return false;
            }
        }
        return true;
    }
};
