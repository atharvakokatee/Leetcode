#include<bits/stdc++.h>
// Time Complexity: O(n^2) Space Complexity: O(1)
using namespace std;

int maxArea(vector<int>& height) {
    int max_area = INT_MIN;
    for(int i=0;i<height.size();i++){
        for(int j=i;j<height.size();j++){
            max_area = max(max_area,(min(height[i],height[j])*(j-i)));
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