//
//  2_3.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 16/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include "linked_list.h"

using namespace std;

void deleteNode(Node* n) {

    if (n == NULL || n->next == NULL) {
        return;
    }
    
    Node* next = n->next;
    n->data = next->data;
    n->next = next->next;
}

//int main(int argc, const char * argv[]) {
//    
//    Node* head = new Node(0);
//    for (int i = 1; i<5; i++) {
//        head->addToTail(i*10);
//    }
//    head->addToTail(55);
//    for (int i = 5; i<=10; i++) {
//        head->addToTail(i*10);
//    }
//    
//    cout << head->toString() << endl;
//    
//    deleteNode(head->findNode(55));
//    
//    cout << endl << "----" << endl << head->toString() << endl;
//    
//    return 0;
//}