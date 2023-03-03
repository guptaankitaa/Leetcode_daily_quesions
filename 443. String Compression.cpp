class Solution {
public:
    int compress(vector<char>& chars) {
	int i = 0;
	for(int j = 1, count = 1; j <= chars.size(); j++, count++) {
		if(j == chars.size() || chars[j] != chars[j - 1]) {
			chars[i++] = chars[j - 1];  
			if(count >= 2) 
				for(char digit : to_string(count)) 
					chars[i++] = digit;
			count = 0;
		}
	}
	return i;
}
};

// i at 0 index j at 1 index
//if j has equal value as j-1
//increment i and j -1 become i
//if count is greater than 2 so we iterate and change the digit into string 
