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
    //make a dummy node
    //create temp variable to iterate through it
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
       ListNode* temp=dummy ;

       //base case
        if(list1 == NULL && list2==NULL){
            return dummy->next;
        }
        else if (list1 != NULL&& list2==NULL){
            return list1;
            
        }
        else if (list2 != NULL && list1==NULL){
            return list2;
            
        }
        //recursion
        recur(list1,list2,temp);
      
        
        
        return dummy->next;
    }
    //use recursion to merge the list
   void recur(ListNode* list1, ListNode* list2,ListNode* &temp){
        //edge cases
        if (list1 == nullptr) {
            temp->next = list2;
            return;
        }
        if (list2 == nullptr) {
            temp->next = list1;
            return;
        }
        //smalleer number gets added
     
        if(list1->val>=list2->val ){
            temp->next=list2;
      
        
            recur(list1,list2->next,temp->next);
             
      
        }
        else if(list2->val>=list1->val){
            temp->next=list1;
       
        
            recur(list1->next,list2,temp->next);
            
        }
       
        
    }
};
