//
//  1_8.cpp
//  Google-CTCI
//
//  Created by Remi Santos on 15/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

bool isSubstring(string s1, string s2) {
    for (int i = 0; i<=(s1.length() - s2.length()); i++) {
        bool found = true;
        for (int y = 0; found && y < s2.length(); y++) {
            if (s1[i+y] != s2[y]) {
                found = false;
            }
        }
        if (found) {
            return  true;
        }
    }
    return false;
}

bool isRotation(string s1, string s2) {
    
    if (s1.length() != s2.length()) {
        return false;
    }
    string concat = s1 + s1;
    return isSubstring(concat, s2);
}

//int main(int argc, const char * argv[]) {
//
//    string s1 = "waterbottle";
//    string s2 = "erbottlewat";
//    cout << s2 << " is Rotation of " << s1 << " ? : " << isRotation(s1, s2) << endl;
//    return 0;
//}