#include<vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int>d;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                d.push_back(mat[i][j]);
            }
        }
        vector<vector<int>>ans(r,vector<int>(c));
        if(mat.size()*mat[0].size()!=r*c)
        return mat;
        else{
            int k=0;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    ans[i][j]=d[k++];
                }
            }
        }
        return ans;
    }
};