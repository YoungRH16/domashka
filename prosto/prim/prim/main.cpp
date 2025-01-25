//
//  main.cpp
//  prim
//
//  Created by Альберт Закиров on 26.01.2025.
//

#include <iostream>
using namespace std;


bool isChess(int** matr, int n, int m) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 1; j < m; j++) {
            if ((matr[i][j-1] == matr[i][j]) || (matr[i+1][j]==matr[i][j])){
                return false;
            }
        }
    }
    return true;
}
 
void vvod() {
    int n, m;
    cin >> n >> m;
    int** matr = new int* [n];
    for (int i = 0; i < n; i++) {
        matr[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matr[i][j];
        }
    }
    cout << endl;
    bool chess = isChess(matr, n, m);
    if (chess) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    vvod();
}
