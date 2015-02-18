//
//  1_3.cpp
//  Google-Chapter-1
//
//  Created by Remi Santos on 12/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

bool isAnagram(string w1, string w2) {
    
    if (w1.length() != w2.length()) {
        return false;
    }
    
    sort(w1.begin(), w1.end());
    sort(w2.begin(), w2.end());
    
    return w1 == w2;
}

bool isAnagramB(string w1, string w2) {
    
    if (w1.length() != w2.length()) {
        return false;
    }
    
    int ascii[256] = { 0 };
    
    for (int i = 0 ; i<w1.length(); i++) {
        int val = (int)w1[i];
        ascii[val]++;
    }
    
    for (int i = 0; i<w2.length(); i++) {
        int val = (int)w2[i];
        ascii[val]--;
        if (ascii[val] < 0) {
            return false;
        }
    }
    return true;
}

//int main(int argc, const char * argv[]) {
//    
//    string w1 = "listen";
//    string w2 = "silent";
//    
//    cout << w1 << " & " << w2 << " -> " << isAnagram(w1, w2) << endl;
//    cout << w1 << " & " << w2 << " -> " << isAnagramB(w1, w2) << endl;
//    return 0;
//}