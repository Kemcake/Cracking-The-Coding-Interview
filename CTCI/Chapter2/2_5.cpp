//
//  2_5.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 17/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include "linked_list.h"

using namespace std;

Node* sum(Node* n1, Node*  n2) {
    
    Node* result = new Node(0);
    Node* head = result;
    while (n1 || n2) {
        int sum = 0;
        if (n1) {
            sum += n1->data;
            n1 = n1->next;
        }
        if (n2) {
            sum += n2->data;
            n2 = n2->next;
        }
        sum += result->data;
        result->data = sum%10;
        result->next = new Node(sum/10);
        result = result->next;
    }
    
    cout << "last :" << result->data << endl;
    if (result->data == 0) {
        result = NULL;
    }
    return head;
}

//int main(int argc, const char * argv[]) {
//    
//    Node* n1 = new Node(3);
//    n1->addToTail(2);
//    n1->addToTail(1);
//    // we have 3->2-> to represent 123
//    
//    Node* n2 = new Node(8);
//    n2->addToTail(8);
//    n2->addToTail(4);
//
//    
//    cout << n1->toString() << " + " << n2->toString() << endl;
//    
//    cout << endl << " = " << sum(n1, n2)->toString() << "----" << endl << endl;
//    
//    return 0;
//}