//
//  linked_list.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 15/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include "linked_list.h"

Node::Node(int d) {
    this->data = d;
}

void Node::addToTail(int d) {
    Node* newNode = new Node(d);
    Node* n = this;
    if (!n->next) {
        n->next = newNode;
        newNode->next = NULL;
        return;
    }
    
    while (n->next) {
        n = n->next;
    }
    n->next = newNode;
}

Node* Node::deleteNode(int d) {
    Node* head = this;
    if (head->data == d) {
        return head->next;
    }
    Node* n = head;
    while (n->next) {
        if (n->next->data == d) {
            n->next = n->next->next;
            return head;
        }
        n = n->next;
    }
    return head;
}
Node* Node::findNode(int d) {
    Node* head = this;
    while (head) {
        if (head->data == d) {
            return head;
        }
        head = head->next;
    }
    return NULL;
}

string Node::toString() {
    string str = "";
    Node* n = this;
    while (n) {
        str.append(to_string(n->data));
        str.append("->");
        n = n->next;
    }
    return str;
}