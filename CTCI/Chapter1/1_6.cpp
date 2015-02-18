//
//  1_6.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 15/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void rotateMatrix(int* matrix, int n) {
    
    for (int layer = 0; layer < n/2 ; layer++) {
        int first = layer;
        int last = n-1-layer;
        
        for (int i = first; i<last; i++) {
            int offset = i-first;
            //store top
            int top = matrix[first*n + i];
            
            //left->top
            matrix[first*n + i] = matrix[(last-offset)*n + first];
            
            //bot->left
            matrix[(last-offset)*n + first] = matrix[last*n + (last-offset)];
            
            //right->bot
            matrix[last*n + (last-offset)] = matrix[i*n + last];
            
            //top->right
            matrix[i*n + last] = top;
        }
    }
}

//void printMatrix(int* matrix, int n, int m) {
//    cout << "------------";
//    for (int i = 0; i<n; i++) {
//        cout << endl;
//        for (int y = 0; y<m; y++) {
//            cout << to_string(matrix[i*m + y]) << " ";
//        }
//    }
//    cout << endl << "------------";
//}

//int main(int argc, const char * argv[]) {
//
//    int n = 6;
//    int m[][6] = { {0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5} };
////    for (int i = 0; i<n; i++) {
////        for (int y = 0 ; y<n; y++) {
////            m[y][i] = i;
////        }
////    }
//    int* matrix = (int*)m;
//    printMatrix(matrix, n, n);
//    
//    rotateMatrix(matrix,n);
//    
//    printMatrix(matrix, n, n);
//    return 0;
//}