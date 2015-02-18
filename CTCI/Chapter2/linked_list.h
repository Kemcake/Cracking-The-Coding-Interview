//
//  linked_list.h
//  Google-CTCI
//
//  Created by Remi Santos on 15/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#ifndef __Google_CTCI__linked_list__
#define __Google_CTCI__linked_list__

#include <stdio.h>
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next = NULL;
    
    Node(int d);
    void addToTail(int d);
    Node* deleteNode(int d);
    Node* findNode(int d);

    string toString();
};

#endif /* defined(__Google_CTCI__linked_list__) */
