#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *getIntersectingNode(ListNode *head1, ListNode *head2) {
    ListNode *ptr1 = head1, *ptr2 = head2;
    int len1 = 0, len2 = 0;
    while (ptr1 || ptr2) {
        if (ptr1) {
            ptr1 = ptr1->next;
            len1++;
        }
        if (ptr2) {
            ptr2 = ptr2->next;
            len2++;
        }
    }
    ptr1 = head1, ptr2 = head2;
    int diff = abs(len1 - len2);
    if (len1 > len2) {
        while (diff--) {
            ptr1 = ptr1->next;
        }
    } else {
        while (diff--) {
            ptr2 = ptr2->next;
        }
    }
    while (ptr1 != ptr2) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return ptr1;
}

int main() {
    // Create linked lists and set the intersecting node
    ListNode *head1 = new ListNode(1);
    ListNode *head2 = new ListNode(2);
    ListNode *node1 = new ListNode(3);
    ListNode *node2 = new ListNode(4);
    ListNode *node3 = new ListNode(5);
    ListNode *intersectingNode = new ListNode(6);

    head1->next = node1;
    node1->next = node2;
    node2->next = intersectingNode;

    head2->next = node3;
    node3->next = intersectingNode;

    ListNode *result = getIntersectingNode(head1, head2);
    if (result) {
        std::cout << "Intersecting node: " << result->val << std::endl;
    } else {
        std::cout << "The linked lists do not intersect." << std::endl;
    }

    return 0;
}
