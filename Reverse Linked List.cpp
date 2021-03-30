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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* temp1 = new ListNode();
        ListNode* temp2 = new ListNode();
        temp2 = NULL;

        ListNode* ans = new ListNode();
        while(head !=NULL)
        {
            temp1 = head->next;
            head->next = temp2;
            temp2 = head;
            head = temp1;

        }

        return temp2;

    }
};//
// Created by Daksh on 30-03-2021.
//

