//
//  main.cpp
//  kl_r5
//
//  Created by Альберт Закиров on 01.02.2025.
//

#include <iostream>
using namespace std;

int square(int a, int h) {
    return a * h;
}

int main() {
    int a, h;
    cout << "a, h:";
    cin >> a >> h;
    cout << square(a, h);
}
