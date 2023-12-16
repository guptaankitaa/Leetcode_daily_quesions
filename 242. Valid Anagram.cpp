class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

// Time Complexity = O(n logn), Space Complexity = O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> smp;
        unordered_map<char, int> tmp;

        for(int i = 0; i < s.size(); i++) {
            smp[s[i]]++;
            tmp[t[i]]++;
        } 

        for(int i = 0; i < smp.size(); i++) {
        if(smp[i] != tmp[i]) {
            return false;
        }
        }
       return true;
    }
};


// time = 0(2n), space = 0(2n);
