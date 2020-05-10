// faster than 88.25%

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t found = haystack.find(needle);
        if(found != string::npos)
            return found;
        return -1;
    }
};
