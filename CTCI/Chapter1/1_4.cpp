//
//  1_4.cpp
//  Google-Chapter-1
//
//  Created by Remi Santos on 12/02/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

//Mine
string replaceSpaces(string s) {
    string n = "";
    char space = ' ';
    cout << space << endl;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            n += "%20";
        } else {
            n += s[i];
        }
    }
    return n;
}

void replaceSpacesB(char s[], int l) {

    int spaces = 0;
    for (int i = 0; i<l; i++) {
        if (s[i] == ' ') {
            spaces++;
        }
    }
    int newLength = l+ spaces*3;

    for (int i = l-1; i >= 0; i--) {
        if (s[i] == ' ') {
            s[newLength-1] = '0';
            s[newLength-2] = '2';
            s[newLength-3] = '%';
            newLength = newLength - 3;
        } else {
            s[newLength-1] = s[i];
            newLength--;
        }
    }
}

//int main(int argc, const char * argv[]) {
//    
//    string s = "listen this silent";
//    
//    cout << s << " -> " << replaceSpaces(s) << endl;
//    
//    char st[] = "haidioh lol true";
//    cout << st << " -> ";
//    replaceSpacesB(st,20);
//    cout << st << endl;
//
//    return 0;
//}