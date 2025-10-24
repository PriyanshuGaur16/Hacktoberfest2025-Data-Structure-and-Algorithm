/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         int sizeA=0;
        ListNode* tempA=headA;
        while(tempA!=NULL){
            sizeA+=1;
            tempA=tempA->next;
        }
        int sizeB=0;
        ListNode* tempB=headB;
        while(tempB!=NULL){
            sizeB+=1;
            tempB=tempB->next;
        }
        int m=abs(sizeA-sizeB);
        tempA=headA;
        tempB=headB;
        if(sizeA>sizeB){
            for(int i=1;i<=m;i++){
                tempA=tempA->next;
            }
        }
        else if(sizeA<sizeB){
            for(int i=1;i<=m;i++){
                tempB=tempB->next;
            }
        }
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
    }
};
