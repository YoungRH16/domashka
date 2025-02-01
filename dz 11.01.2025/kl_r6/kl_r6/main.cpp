//
//  main.cpp
//  kl_r6
//
//  Created by Альберт Закиров on 12.01.2025.
//

#include <iostream>
using namespace std;

bool Xor(bool x, bool y) {
    int c = 0;
    if (x) c += 1; if (y) c += 1;
    return (c == 1);
}

int main() {
    bool x, y;
    cout << "x, y:";
    cin >> x >> y;
    cout << Xor(x, y);
}
