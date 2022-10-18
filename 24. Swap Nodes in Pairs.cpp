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
    ListNode* swapPairs(ListNode* head) {
        ListNode* cur=head;            //Current Node
        if(cur==NULL)return head;      //Empty Linked List
        ListNode* nxt=head->next;      //Next Node
       
        ListNode* tmp=new ListNode();  //Temparary Node 
        tmp->next=head;                //Pointing next pointer of tmp to head 
        ListNode* pr=tmp;              //Previous Node
        while(cur!=NULL && nxt!=NULL)  //If nxt is NULL that is List with one element only will not iterarte
        {
            nxt=cur->next;              
            if(nxt==NULL)break;         //To avoid NULL access
            cur->next=nxt->next;        
            nxt->next=cur;              //a->b->c .....b->a->c
            pr->next=nxt;               //pr->a->b->c ..... pr->b->a->c
            pr=cur;                     //so our current node will be previous for next iteration
            cur=cur->next;              //pointing cur to next   a=c
        }
        return tmp->next;               //returning new head
    }
};
