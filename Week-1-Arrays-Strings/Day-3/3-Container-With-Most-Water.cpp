#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int ans=0;
        while(start<end){
            ans=max(min(height[start],height[end])*(end-start),ans);
            if(height[start]<height[end])
                start++;
            else
                end--;
        }
        return ans;
    }
};