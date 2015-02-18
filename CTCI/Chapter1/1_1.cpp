//
//  main.cpp
//  Google-Chapter-1
//
//  Created by Remi Santos on 09/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <iostream>
#include <map>
#include <cassert>

using namespace std;

bool onlyUniqueChars(string str) {
    
    char ar[100];
    
    for (int i = 0; i<str.length(); i++) {
        
        for (int y = 0; y<i; y++) {
            if (ar[y] == str[i]) {
                return false;
            }
        }
        ar[i] = str[i];
    }
    
    
    return true;
}

bool onlyUniqueChars2(string str) {
    
    if (str.length() > 256) {
        return false; // the length of the string is superior than the number of possible chars (here ASCII)
    }
    bool ar[256] = { false };
    
    for (int i = 0; i<str.length(); i++) {
        int val = int(str[i]);
        cout << "\n val: " << str[i] << " int: " << val << " ar: " << ar[val] << "\n";
        if (ar[val] == true) {
            return false;
        }
        ar[val] = true;
    }
    return true;
}

//int main(int argc, const char * argv[]) {
//
//    cout << "Hello, World!\n";
//    map<int, string> m;
//    m[10] = "Hello";
//    m[12] = "World";
//    
//    if (m.find(10) != m.end()) {
//        cout << "Exists\n";
//    }
//    map<int, string>::iterator i = m.find(12);
//    if (i != m.end()) {
//        cout << "Key: " << i->first << " value: " << i->second;
//    }
//    
//    cout << "\n ";
//    
//    string s = "abcdefghijkl";
//    cout << onlyUniqueChars2(s);
//    return 0;
//}


