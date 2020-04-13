// Longest Palindromic Substring O(n^2)
#include<bits/stdc++.h>

using namespace std;

string longestString(string &s){
    string best_s="";
    for(int mid=0;mid<s.size();mid++){
        for(int x=0;mid-x>=0 && mid+x<s.size();x++){
            if(s[mid-x] != s[mid+x])
                break;
            int len = 2 * x + 1;
            if(len > best_s.size()){
                best_s = s.substr(mid-x,len);
            }    
        }
    }
    for(int mid=0;mid<s.size();mid++){
        for(int x=0;mid-x+1>=0 && mid+x<s.size();x++){
            cout<<" mid-x+1 "<<s[mid-x+1]<<" mid+x "<<s[mid+x]<<endl;
            if(s[mid-x+1]!=s[mid+x])
                break;
            int len = 2 * x;
            if(len > best_s.size()){
                best_s = s.substr(mid-x+1,len);
            }    
        }
    }
    return best_s;
}

int main(){
    string s;
    cin>>s;
    string result = longestString(s);
    cout<<result;
}
