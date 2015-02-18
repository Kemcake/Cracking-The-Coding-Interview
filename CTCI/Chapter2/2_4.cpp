//
//  2_4.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 16/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include "linked_list.h"

using namespace std;

//Mine
Node* partitionate(Node* head, int k) {
    
    Node* begin = head;
    Node* left = NULL;
    Node* right = NULL;
    Node* middle = NULL;
    while (head->next) {
        
        if (head->data <= k) {
            if (left == NULL) {
                left = head;
            } else {
                left->next = head;
                left = head;
            }
        } else {
            if (right == NULL) {
                right = head;
                middle = right;
            } else {
                right->next = head;
                right = head;
            }
        }
        
        head = head->next;
    }
    left->next = middle;
    return begin;
}

//int main(int argc, const char * argv[]) {
//    
//    Node* head = new Node(0);
//    for (int i = 5; i<=10; i++) {
//        head->addToTail(i*10);
//    }
//    for (int i = 1; i<5; i++) {
//        head->addToTail(i*10);
//    }
//    head->addToTail(85);
//   
//    
//    cout << head->toString() << endl;
//    
////    partitionate(head, 30);
//    cout << endl << "----" << endl << partitionate(head, 30)->toString() << endl;
//    
//    return 0;
//}