#include<vector>
using namespace std;


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>s=strs;
        for(int i=0;i<strs.size();i++){
            sort(s[i].begin(),s[i].end());
        }

        vector<vector<string>>ans;
        vector<bool>u(strs.size(),false);
        for(int i=0;i<strs.size();i++){
            if(u[i]) continue;

            vector<string>g;
            g.push_back(strs[i]);
            u[i]=true;

            for(int j=i+1;j<strs.size();j++){
                if(u[j]) continue;

                if(s[i]==s[j]){
                    g.push_back(strs[j]);
                    u[j]=true;
                }
            }
            ans.push_back(g);
        }
        return ans;
    }
};