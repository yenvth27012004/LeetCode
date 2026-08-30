//digits are stored in reverse order
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int carry = 0;

        ListNode dummy;
        ListNode* current = &dummy;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            int a = (l1 != nullptr) ? l1->val : 0;
            int b = (l2 != nullptr) ? l2->val : 0;

            int sum = a + b + carry;

            int digit = sum % 10;
            carry = sum / 10;

            current->next = new ListNode(digit);
            current = current->next;

            if (l1 != nullptr)
                l1 = l1->next;

            if (l2 != nullptr)
                l2 = l2->next;
        }

        return dummy.next;
    }
};

int main(){
    
    Solution s;
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* result = s.addTwoNumbers(l1, l2);

    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}