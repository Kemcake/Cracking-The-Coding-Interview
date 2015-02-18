//
//  2_1.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 15/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include "linked_list.h"
#include <map>
using namespace std;


//with buffer
void removeDuplicates(Node* head) {

    Node *n = head;
    map<int, bool> exist;
    exist[n->data] = 1;
    while (n->next) {
        if (exist[n->next->data] == 1) {
            n->deleteNode(n->next->data);
        } else {
            exist[n->next->data] = 1;
            n = n->next;
        }
        
    }
}

//without Buffer
void removeDuplicatesWithoutBuffer(Node* head) {
    
    Node *n = head;
    while (n->next) {
        
        Node *runner = n;
        while (runner->next) {
            if (n->data == runner->data) {
                n->deleteNode(runner->data);
            }
            runner = runner->next;
        }
        n = n->next;
    }
}

//int main(int argc, const char * argv[]) {
//    
//    Node* head = new Node(10);
//    head->addToTail(20);
//    head->addToTail(30);
//    head->addToTail(20);
//    head->addToTail(20);
//
//    cout << head->toString() << endl;
//    
//    removeDuplicatesWithoutBuffer(head);
//    
//    cout << head->toString() << endl;
//
//    return 0;
//}