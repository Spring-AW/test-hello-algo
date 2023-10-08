#include "../utils/common.hpp"
#include "../utils/print_utils.hpp"

void insert(ListNode *n0, ListNode *P) {
    ListNode *n1 = n0->next;
    P->next = n1;
    n0->next = P;
}

int main() {
    ListNode *n0 = new ListNode(1);
    ListNode *n1 = new ListNode(2);
    ListNode *n2 = new ListNode(3);
    ListNode *n3 = new ListNode(4);
    ListNode *n4 = new ListNode(5);

    n0->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    cout << "初始化链表为" << endl;
    printLinkedList(n0); 

    insert(n0, new ListNode(0));
    cout << "插入节点后的链表为" << endl;
    printLinkedList(n0);

}