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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head;
        int cnt = 0;
        while (temp)
        {
            cnt++;
            temp = temp->next;
        }
        temp = head;
        if (cnt == n)
        {
            head = head->next;
            delete temp;
            return head;
        }
        int k = cnt - n;
        while (temp)
        {
            k--;
            if (k == 0)
            {
                break;
            }
            temp = temp->next;
        }
        ListNode *nextNode = temp->next;
        temp->next = temp->next->next;
        delete nextNode;
        return head;
    }
};