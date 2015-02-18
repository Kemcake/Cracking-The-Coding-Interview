//
//  1_7.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 15/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void setZeros(int* matrix, int n, int m) {
    bool rows[256] = {false};
    bool cols[256] = {false};
    
    for (int i = 0; i<n; i++) {
        for (int y = 0; y<m; y++) {
            if (matrix[i*m + y] == 0) {
                rows[i] = true;
                cols[y] = true;
            }
        }
    }
    
    for (int i = 0; i<n; i++) {
        for (int y = 0; y<m; y++) {
            if (rows[i] || cols[y]) {
                matrix[i*m + y] = 0;
            }
        }
    }
    
}

void printMatrix(int* matrix, int n, int m) {
    cout << "------------";
    for (int i = 0; i<n; i++) {
        cout << endl;
        for (int y = 0; y<m; y++) {
            cout << to_string(matrix[i*m + y]) << " ";
        }
    }
    cout << endl << "------------" << endl;
}
//int main(int argc, const char * argv[]) {
//
//    int n = 6;
//    int m = 8;
//    int mat[6][8] = { {0,1,2,3,4,5,6,7},{1,1,2,3,4,5,6,7},{0,1,2,3,4,5,6,7},{3,1,2,3,4,5,6,7},{0,1,2,3,4,5,6,7},{0,1,2,3,4,5,6,7} };
//
//    int* matrix = (int*)mat;
//    printMatrix(matrix, n, m);
//    
//    setZeros(matrix, n, m);
////    rotateMatrix(matrix,n);
//
//    printMatrix(matrix, n, m);
//    return 0;
//}