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
//make a new node
//add the givenode to this node
//create a curr stationary variable(the next two node will be swapple)
//after swapping attach curr to the second node

    ListNode* swapPairs(ListNode* head) {
        //new node
        ListNode* ans=new ListNode(0);
        ListNode* curr=ans;
        ans->next=head;
        //swap
        while(curr->next!=nullptr && curr->next->next!=nullptr){
            ListNode* fir=curr->next;
            ListNode* sec=curr->next->next;
            fir->next=sec->next;
            sec->next=fir;
            curr->next=sec;
            curr=fir;
        }
        return ans->next;

    }
};
