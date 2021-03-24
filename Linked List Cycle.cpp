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
    bool hasCycle(ListNode *head)
    {
        ListNode* fastp = head;
        ListNode* slowp = head;
        while(fastp!= NULL && fastp->next!= NULL)
        {
            fastp = fastp->next->next;
            slowp = slowp->next;
            if(fastp == slowp)
            {
                return true;
            }
        }
        return false;

    }
};//
// Created by Daksh on 24-03-2021.
//

