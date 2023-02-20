#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int value) {
        val = value;
        prev = NULL;
        next = NULL;
    }
};

Node* sortedListToBST(Node* head, int n) {
    if (n == 0) {
        return NULL;
    }

    // Find the middle node of the linked list
    int mid = n / 2;
    Node* ptr = head;
    for (int i = 0; i < mid; i++) {
        ptr = ptr->next;
    }

    // Create a new node for the middle element and make it the root of the tree
    Node* root = new Node(ptr->val);

    // Recursively convert the left and right halves of the linked list
    root->prev = sortedListToBST(head, mid);
    if (root->prev) {
        root->prev->next = root;
    }
    root->next = sortedListToBST(ptr->next, n - mid - 1);
    if (root->next) {
        root->next->prev = root;
    }

    return root;
}

int countNodes(Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;

    int n = countNodes(head);
    Node* root = sortedListToBST(head, n);
    // Perform any necessary tree traversal or output operations here
    return 0;
}
