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
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* mid = slow;
        ListNode* prev, *next;
        prev = next = NULL;
        while(mid != NULL)
        {
            next = mid->next;
            mid->next = prev;
            prev = mid;
            mid = next;
        }

        ListNode* middleOfList = prev;
        while(head && middleOfList)
        {
            if(middleOfList->val != head->val)
                return false;
            head = head->next;
            middleOfList = middleOfList->next;
        }
        return true;
    }
};