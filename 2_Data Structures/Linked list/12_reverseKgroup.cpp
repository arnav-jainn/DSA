//reverse the list in group of K
// LC-25

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

    int glength(ListNode*head){
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*nextNode=curr->next;
        int pos=0;
         
        int len=glength(head);
        if(len<k){
            return head;
        }
        
        while(pos<k){
            pos++;
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        ListNode*recursionKaAns=NULL;
        if(nextNode!=NULL){
            recursionKaAns=reverseKGroup(nextNode,k);
            head->next=recursionKaAns;
        }
        return prev;
    }
};