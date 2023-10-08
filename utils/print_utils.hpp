#pragma once

#include "list_node.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

template <typename T> string strJoin(const string &delim, const T &vec) {
    ostringstream s;
    for( const auto &i : vec) {
        if (&i != &vec[0]) {
            s << delim;
        }
        s << i;
    }
    return s.str();
}

template <typename T> void printArray(T *arr, int n) {
    cout << "[";
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << ", ";
    }
    if (n >= 1)
        cout << arr[n - 1] << "]" <<endl;
    else 
        cout << "]" << endl;
}

void printLinkedList(ListNode *head) {
    vector<int> list;
    while( head != nullptr) {
        list.push_back(head->val);
        head = head->next;
    }
    cout << strJoin(" -> ", list) << '\n';
}