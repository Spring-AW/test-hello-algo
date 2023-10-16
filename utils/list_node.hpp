#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {
        
    }
};

void freeMemoryLinkedList(ListNode *cur) {
    ListNode *pre;
    while (cur != nullptr) {
        pre = cur;
        cur = cur->next;
        delete pre;
    }
}