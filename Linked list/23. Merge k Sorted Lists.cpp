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
//turne the vectors of ll into a single vector containing all the elements
//sort that vector
//arrange the values of that that vector into a new linked list
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //ll into vector
        int n = lists.size();
   
      vector<int> arr;
        for(int i=0;i<n;i++){
            ListNode* temp = lists[i];
            
            while(temp!=nullptr){
            
                arr.push_back(temp->val);
            
                temp=temp->next;
            }
        }
        //sorting
        sort(arr.begin(),arr.end());
        int y= arr.size();
        ListNode* res=new ListNode(0);
        ListNode* resptr=res;
    //sorted into res ll

        for(int i =0 ;i<y;i++){
            resptr->next= new ListNode(arr[i]);
            resptr=resptr->next;
        }
        return res->next;
    }
   
};
