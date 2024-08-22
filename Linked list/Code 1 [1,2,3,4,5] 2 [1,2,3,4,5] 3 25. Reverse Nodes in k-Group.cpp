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
 //approach
 //divide the list into chunks
 //reverse the chunks
 //attach the list
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    //pointers
    //start and end to keep track of list chunks
    //track is used to attach the last element of one list to first element of another
    ListNode* start = head;
    //ans
    ListNode* ans=head;
           ListNode* track = head;

    ListNode* end=head;
    //if list goes oout opf bound
    bool possible=true;
    //the k th node will be the first node of the ans list
    for(int i =1;i<k;i++){
        ans=ans->next;
    }
    while(possible){
        //new head represents the head of chunks
        ListNode* newhead=start;
        //iterate end
        for(int i = 1;i<k;i++){
          
            end=end->next;

        }
        
         track = end;
        //iterate track to connect towo list
        for(int i =0;i<k;i++){
            if(track->next==nullptr){
                possible=false;
                break;
            }

            track=track->next;
        }

        //start of new list

        start = end->next;
         //creating a new chunk

        end->next=nullptr;
        //reverse function
        reverse(newhead,newhead);
        //edge case
          if(possible==false){
            newhead->next=start;
            break;
        }
        //connecting the list
        newhead->next=track;
        end=start;
    }
    return ans;
    }       

    //used recursion
    void reverse(ListNode* head,ListNode* st ){
        //iterating head to last element 
   if(head->next!=nullptr){
    reverse(head->next,st);
   }
   //connect every node to its prev one 

    if(head->next==nullptr){
        //dummy variable gets the brevious node
            ListNode* dummy=st;
            //iterating to prev node
            while(dummy->next!=nullptr && dummy->next!=head){
                dummy=dummy->next;


            }
            //connecting
            head->next=dummy;
            //for recursion
            dummy->next=nullptr;
            return;
    }
        }
    
    
};
