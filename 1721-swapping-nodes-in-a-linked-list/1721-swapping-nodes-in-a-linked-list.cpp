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
    int number_nodes(ListNode* head)
    {
        int count = 0;
        while(head){
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first,*second;
        ListNode* curr = head;
        int size = number_nodes(head);
        for(int i = 1;i<k;i++)
        {
            curr = curr -> next;
        }
        first = curr;
        curr = head;
        for(int i = 1;i<size - k + 1;i++)
        {
            curr = curr -> next;
        }
        second = curr;
        swap(first->val,second->val);
        return head;
    }
};