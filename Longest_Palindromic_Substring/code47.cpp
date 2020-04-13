#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(string &s){
    bool ans = true;
    for(int i=0,j=s.size()-1;i<=j;i++,j--){
        if(s[i]!=s[j])
            ans = false;
    }
    return ans;    
}

string LongestString(string &s){
    string best_s = "";
    int max_len = 0;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            string temp = s.substr(i,j-i+1);
            if(checkPalindrome(temp)){
                if(temp.size()>max_len){
                    max_len = temp.size();
                    best_s = temp;
                }
            }
        }
    }
    return best_s;
}

int main(){
    string s;
    cin>>s;
    string ans = LongestString(s);
    cout<<ans;
}