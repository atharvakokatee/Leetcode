#include<bits/stdc++.h>

using namespace std;

int reverseNum(int &n){
    string num = to_string(n);
    string min = "";
    long int ans;
    if(num[0]=='-'){
        min = "-";
        num = num.substr(1,num.size()-1);
    }
    reverse(num.begin(),num.end());
    if(min=="-")
        ans = -1 * stol(num);
    else
        ans = stol(num);    
    if(ans > INT32_MAX || ans < INT32_MIN){
        ans = 0;
        return ans;
    } else{
        return ans;
    }
}

int main(){
    int n;
    cin>>n;
    int ans = reverseNum(n);
    cout<<ans;
}