//
//  1_5.cpp
//  Google-Chapter-1
//
//  Created by Remi Santos on 12/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

//Mine
int countCompress(string s) {
    
    char p = s[0];
    int count = 1;
    int size = 0;
    for (int i = 1; i<s.length(); i++) {
        if (s[i] != p) {
            p = s[i];
            size = size + 1 + (int)to_string(count).length();
            count = 1;
        } else {
            count++;
        }
    }
    size = size + 1 + (int)to_string(count).length();
    return size;
}
string compress(string s) {
    if (countCompress(s) > s.length()) {
        return s;
    }
    
    string nS = "";
    
    char p = s[0];
    int count = 1;
    
    for (int i = 1; i<s.length(); i++) {
        if (s[i] != p) {
            nS.append(1, p);
            nS.append(to_string(count));
            p = s[i];
            count = 1;
        } else {
            count++;
        }
    }
    nS.append(1, p);
    nS.append(to_string(count));
    
    return nS;
}

//int main(int argc, const char * argv[]) {
//    
//    string s = "aabcaa";
//    cout << s << " -> " << compress(s) << endl;
//    return 0;
//}