//
//  main.cpp
//  kl_r2
//
//  Created by Альберт Закиров on 20.01.2025.
//

#include <iostream>
using namespace std;
void stars1(int n){
    for(int i = 1; i < (n+1); i--){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void stars2(int n){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    stars1(6);
    cout << endl;
//stars2(5);
    cout << endl;
    return 0;
}
