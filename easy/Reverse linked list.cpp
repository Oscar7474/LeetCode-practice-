class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head; 
    while(curr){
        ListNode* forward = curr->next;   // 2      1->2
        curr->next = prev;  //   1->null
        prev = curr;     // null = 1
        curr = forward; //1 = 2
    }
    return prev;
    }
};
