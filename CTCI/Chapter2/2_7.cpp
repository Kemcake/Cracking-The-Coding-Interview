//
//  2_7.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 18/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include "linked_list.h"
#include <stack>
using namespace std;

bool isPalindrome(Node* head) {
    Node* fast = head;
    stack<int> st;
    
    while (head) {
//        cout << "data : " << head->data << endl;
        if (fast != NULL) {
//            cout << "fast" << endl;
            if (fast->next == NULL) { //impair
                fast = NULL;
            } else {
                fast = fast->next->next;
                st.push(head->data);
            }
        } else {
//            cout << st.top() << " =? " << head->data << endl;
            if (st.top() != head->data) {
                return false;
            }
            st.pop();
        }
        
        head = head->next;
    }
    
    return true;
}

//int main(int argc, const char * argv[]) {
//    
//    Node* p = new Node(0);
//    p->addToTail(1);
//    p->addToTail(2);
//    p->addToTail(0);
//    p->addToTail(2);
//    p->addToTail(1);
//    p->addToTail(0);
//    
//    cout << p->toString() << " is a palindrome ? : " << isPalindrome(p) << endl;
//    
//    
//    return 0;
//}