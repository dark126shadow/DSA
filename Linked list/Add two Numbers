class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //create an ans listnode
        ListNode* ans = new ListNode(0);
        //create a temporary listnode which will iterate and add elements to the ans linked list
        ListNode* temp= ans;
        //create an integer carry which will carry the remainder
        int carry=0;
        //create two temporary variables which will contain the values of 11 and l2
        int temp1,temp2;
        //loop will not stop when carry = zero because the other conditions are true(this loop only requires one condition to be true)
        while(l1!=NULL || l2!=NULL || carry!=0){
            if(l1!=NULL){
                temp1=l1->val;

            }
            else{
                temp1=0;
            }
            if(l2!=NULL){
                temp2=l2->val;
            }
            else{
                temp2=0;
            }
            //some mathematical things
            int tempans=temp1+temp2+carry;
            int num=tempans%10;
            carry=tempans/10;
            //create a new ListNode to add it to the temporary node
            ListNode* newnode= new ListNode(num);
            temp->next=newnode;
            temp=temp->next;
            //continue iterating
            if(l1!=NULL){
                l1=l1->next;
            }
            if(l2!=NULL){
                l2=l2->next;
            }
        }
        ListNode* res=ans->next;
        //delete ans to save space;\
        delete ans;
        return res;
    }
};
