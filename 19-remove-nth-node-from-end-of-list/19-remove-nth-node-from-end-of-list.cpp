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
class Solution {
public:
    void solve(ListNode* &head, int &n){
        if(head==NULL){
            return;
        }
        solve(head->next,n);
        n--;
        if(n==0){
            head=head->next;
        }
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        solve(head,n);
        return head;
    }
};