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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //create three pointers fast slow med
        ListNode* fast = head;
        ListNode* med = head;
        ListNode* slow = head;
        //move the fast pointer to nth position
        while(n!=0){
            fast = fast->next;
            n--;
        }
        //edge cases
        if(fast==NULL){
            head=head->next;
            return head;
        }
        //move the slow and medium pointer until fast becomes nulll to get to the nth position from last
        while(fast!=NULL){
            slow=med;
            med = med->next;
            fast=fast->next;
        }
        //delete the node
            slow->next=med->next;
            return head;
            }

};
