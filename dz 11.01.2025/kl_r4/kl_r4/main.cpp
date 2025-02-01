//
//  main.cpp
//  kl_r4
//
//  Created by Альберт Закиров on 01.02.2025.
//

#include <iostream>
using namespace std;

int minElemnt(int** matr, int n, int m) {
    int min = matr[0][0];
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < m; y++) {
            if ((matr[x][y]) < min) min = matr[x][y];
        }
    }

    return min;
}

int maxElemnt(int** matr, int n, int m) {
    int max = matr[0][0];
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < m; y++) {
            if ((matr[x][y]) > max) max = matr[x][y];
        }
    }

    return max;
}



int main() {
    int n, m;
    srand(time(0));

    cout << "n, m:";
    cin >> n >> m;

    int** matr = new int* [n];
    for (int i = 0; i < n; i++) {
        matr[i] = new int[m];
    }
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < m; y++) {
            matr[x][y] = rand() % 1000;
            cout << matr[x][y] << " ";
        }
        cout << endl;
    }

    cout << "Min: " << minElemnt(matr, n, m) << endl;
    cout << "Max: " << maxElemnt(matr, n, m);
}
