//
//  2_2.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 16/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>

#include "linked_list.h"
#include <map>
using namespace std;


//Mine -> good!
Node* kthToLast(Node* head, int kth) {
 
    Node *k = head;
    Node *end = head;
    int count = 0;
    while (count < kth-1 && end->next) {
        
        end = end->next;
        count++;
    }
    while (end->next) {
        k = k->next;
        end = end->next;
    }
    
    return k;
}

//int main(int argc, const char * argv[]) {
//    
//    Node* head = new Node(10);
//    for (int i = 0; i<30; i++) {
//        head->addToTail(i*10);
//    }
//
//    cout << head->toString() << endl;
//    
//    Node *kth = kthToLast(head, 2);
//
//    cout << endl << "----" << endl << kth->toString() << endl;
//
//    return 0;
//}