#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* curr = &dummy;
    dummy.next = NULL;
    int carry = 0;
    while(l1 != NULL || l2 != NULL || carry) {
        int sum = carry;
        if(l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2) {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        curr->next = createNode(sum % 10);
        curr = curr->next;
    }
    return dummy.next;
}