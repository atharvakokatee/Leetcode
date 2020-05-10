// faster than 55%

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, max_count = 0;
        for(auto ch : s){
            if(ch!=' ') 
                count++;    
            else 
                count=0;
            if(count!=0)
                max_count=count;
        }
        return max_count;
    }
};

// faster than 100%

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(count > 0 && s[i] == ' ') break;
            if(s[i] != ' ') count++;
        }
        return count;
    }
};
