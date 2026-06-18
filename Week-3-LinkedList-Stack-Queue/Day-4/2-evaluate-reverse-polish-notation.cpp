#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>ans;
        for(string t: tokens){
            if(t=="+"||t=="-"||t=="*"||t=="/"){
                int b=ans.top();
                ans.pop();
                int a =ans.top();
                ans.pop();
            
                if(t=="+")
                ans.push(a+b);
                else if(t=="-")
                ans.push(a-b);
                else if(t=="*")
                ans.push(a*b);
                else 
                ans.push(a/b);
            }
            else{
                ans.push(stoi(t));
            }
        }
        return ans.top();
    }
};