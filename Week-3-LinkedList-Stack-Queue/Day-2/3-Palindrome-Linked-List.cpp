#include<cstddef>
#include<vector>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>nums;
        while(head){
            nums.push_back(head->val);
            head=head->next;
        }
        int l=0;
        int r=nums.size()-1;

        while(l<r){
            if(nums[l]!=nums[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};