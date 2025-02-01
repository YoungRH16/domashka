//
//  main.cpp
//  ex3
//
//  Created by Альберт Закиров on 01.02.2025.
//

#include <iostream>
using namespace std;


void vvod(char* s){
    cin.getline(s, 100);
}

void vyvod(char* s){
    cout << s << endl;
}

void ex3(char* s){
    int i = 0;
    int k = 0;
    char* ans = new char[100];
    while(s[i] != '\0'){
        bool p1 = s[i] =='e';
        bool p2 = s[i] =='u';
        bool p3 = s[i] =='i';
        bool p4 = s[i] =='o';
        bool p5 = s[i] =='a';
        bool p6 = s[i] =='y';
        int fl = 0;
        if(p1 or p2 or p3 or p4 or p5 or p6){
            k++;
            fl = 1;
        }
        if(fl == 0)
            ans[i-k] = s[i];
        i++;
    }
    vyvod(ans);
    delete[]ans;
}


int main() {
    char* s = new char[100];
    vvod(s);
    ex3(s);
    delete[]s;
    return 0;
}
