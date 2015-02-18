//
//  1_2.cpp
//  Google-Chapter-1
//
//  Created by Remi Santos on 10/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void reverse(char* str) {
    
    char *end = str;
    char tmp;

    while (*end) {
        end++;
    }
    end--;
    while (str < end) {
        tmp = *str;
        cout << "\n str: " << str << " end: " << end;
        *str++ = *end;
        *end-- = tmp;
    }
}

//int main(int argc, const char * argv[]) {
//
//
//    char str[] = "abcdefghijklmno";
//    cout << "start with : " << str;
//    reverse(str);
//    cout << "\n";
//    cout << "end with : " << str;
//    return 0;
//}