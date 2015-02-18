//
//  2_6.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 18/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include "linked_list.h"

using namespace std;

Node* beginingOfLoop(Node* head) {
    
    Node* fast = head;
    Node* slow = head;
    while (fast && slow) {
        
        if (fast->next != NULL) {
            fast = fast->next->next;
        } else {
            fast = NULL;
        }
        slow = slow->next;
        if (fast == slow) {
            break;
        }
    }
    
    if (fast == NULL ) {
        return NULL;
    }
    
    slow = head;
    while (fast) {
        fast = fast->next;
        slow = slow->next;
        if (fast == slow) {
            return slow;
        }
    }
    
    return NULL;
}

int main(int argc, const char * argv[]) {
    
    Node* p = new Node(0);
    p->addToTail(1);
    p->addToTail(2);
    p->addToTail(3);
    p->addToTail(4);
    p->addToTail(5);
    p->addToTail(6);
    p->addToTail(7);
    p->addToTail(8);
    p->addToTail(9);
    p->addToTail(10);
    Node *four = p->findNode(8);
    Node *last = p->findNode(10);
    last->next = four;
    
    cout << "beginning of loop : " << beginingOfLoop(p)->data << endl;
    
    
    return 0;
}