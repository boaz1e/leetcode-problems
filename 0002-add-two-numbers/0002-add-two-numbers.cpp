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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *newList = new ListNode;
        ListNode* ptr;
        ptr=newList;
        int carry=0;
        if(l1==NULL) return l2;
        if(l2==NULL)  return l1;

        while(l1 || l2 || carry==1){
            if(l1){
                carry+=l1->val;
                l1=l1->next;
            }
            if(l2){
                carry+=l2->val;
                l2=l2->next;
            }
            ptr->next = new ListNode;
            ptr=ptr->next;
            ptr->val = carry%10;
            carry/=10;
        }
        return newList->next;
    }
};