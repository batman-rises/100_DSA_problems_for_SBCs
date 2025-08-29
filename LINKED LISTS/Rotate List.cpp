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
    ListNode *helper(ListNode *head, int k)
    {
        ListNode *temp = head;
        while (temp)
        {
            k--;
            if (k == 0)
                break;

            temp = temp->next;
        }
        return temp;
    }
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *temp = head;
        int c = 1;
        while (temp->next)
        {
            c++;
            temp = temp->next;
        }
        if (k % c == 0)
            return head;

        temp->next = head;

        k = k % c;
        ListNode *newLastNode = helper(head, c - k);

        ListNode *newHead = newLastNode->next;
        newLastNode->next = NULL;
        return newHead;
    }
};