#include<vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int index=0;

        while(i<chars.size()){
            char ch =chars[i];
            int count=0;

            while(i<chars.size() && chars[i]==ch){
                count++;
                i++;
            }
            chars[index++]=ch;

            if(count>1){
                string cnt=to_string(count);
                for(char c : cnt){
                    chars[index++]=c;
                }
            }
        }
        return index;
    }
};