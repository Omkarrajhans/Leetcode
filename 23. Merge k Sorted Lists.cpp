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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<ListNode*>itr(lists.size());
        int n=lists.size();
        for(int i=0;i<n;i++)
        {
            itr[i]=lists[i];
        }
        ListNode* hd=new ListNode();
        ListNode* tmp=hd;
        int ind,mn=INT_MAX;
        while(1)
        {
            mn=INT_MAX;
            
            for(int i=0;i<n;i++)
            {
                if(itr[i]!=NULL && itr[i]->val<mn)
                {
                    mn=itr[i]->val;
                    ind=i;
                }
            }
            if(mn==INT_MAX)
            {
                break;
            }
            ListNode* nw=new ListNode();
            nw->val=itr[ind]->val;
            itr[ind]=itr[ind]->next;
            tmp->next=nw;
            tmp=nw;
        }
        hd=hd->next;
        return hd;
    }
};
