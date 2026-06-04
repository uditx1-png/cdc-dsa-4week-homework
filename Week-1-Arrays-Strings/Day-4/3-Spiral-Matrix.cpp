#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>ans;
    int r=matrix.size();
    int c=matrix[0].size();
    int top=0,right=c-1,bottom=r-1,left=0;
    while(left<=right&&top<=bottom){

        // print top 
        for(int j=left;j<=right;j++){
            ans.push_back(matrix[top][j]);
        }
        top++;
        // print right
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        // print bottom
        if(top<=bottom){
        for(int j=right;j>=left;j--){
            ans.push_back(matrix[bottom][j]);
        }
        bottom--;
    }
        // print left 
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }
    }
    return ans;
    }
};