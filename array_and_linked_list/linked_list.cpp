#include "../utils/common.hpp"
#include "../utils/print_utils.hpp"

void insert(ListNode* n0, ListNode* P) {
    ListNode *n1 = n0->next;
    P->next = n1;
    n0->next = P;
}

/* 删除链表的节点 n0 之后的首个节点 */
void remove(ListNode* n0) {
    if(n0->next == nullptr) 
        return;

    // ListNode *p = n0->next;
    // ListNode *n1 = p->next;
    n0->next = n0->next->next;

    // delete p;
}

ListNode *access(ListNode *head, int index) {
    for (int i = 0; i < index; i++) {
        if( head == nullptr)
            return nullptr;
        head = head->next;
    }
    return head;
}

int find(ListNode *head, int target) {
    int index= 0;
    while (head != nullptr) {
        if (head->val == target) {
            return index;
        }
        head = head->next;
        index++;
    }
    return -1;
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

    remove(n0);
    cout << "删除节点后的链表为" << endl;
    printLinkedList(n0);

    ListNode *node = access(n0,3);
    cout << "链表中索引 3 处的节点值 = " << node->val << endl;

    int index = find(n0,2);

    cout << "链表中值为 2 的节点的索引 = " << index << endl;

    freeMemoryLinkedList(n0);
    
    return 0;

}