#include<bits/stdc++.h>
// Time Complexity: O(n) Space Complexity: O(1)
using namespace std;

int maxArea(vector<int>& height) {
    int max_area = INT_MIN;
    int l = 0,r = height.size()-1;
    while(l < r){
        max_area = max(max_area,(min(height[l],height[r])*(r-l)));
        if(height[l]<height[r]){
            l++;
        } else{
            r--;
        }        
    }
    return max_area;
}

int main(){
    int n;
    vector<int> height;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        height.push_back(temp);
    }
    int max_area = maxArea(height);
    cout<<max_area<<endl;
}