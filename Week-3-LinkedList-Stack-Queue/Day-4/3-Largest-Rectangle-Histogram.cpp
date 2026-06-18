#include<vector>
#include<stack>
using namespace std;


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        int n=heights.size();
        int ans=0;
        for(int i=0;i<n;i++){
            while(! s.empty() && heights[s.top()]>heights[i]){
                int index=s.top();
                s.pop();
                if(! s.empty()){
                    ans=max(ans,heights[index]*(i-s.top()-1));
                }
                else{
                    ans=max(ans,heights[index]*i);
                }
            }
            s.push(i);
        }
        while(! s.empty()){
            int index=s.top();
            s.pop();
            if(! s.empty()){
                ans=max(ans,heights[index]*(n -s.top()-1));
            }
            else{
                ans=max(ans,heights[index]*n);
            }
        }
        return ans;
    }
};