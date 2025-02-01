//
//  main.cpp
//  ex2
//
//  Created by Альберт Закиров on 01.02.2025.
//

#include <iostream>
using namespace std;

void vvod(int** matr, int n, int m){
    cout << "Enter the matr: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matr[i][j];
        }
    }
}

void vyvod(int** matr, int n, int m){
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int ex2(int** matr, int n, int m){
    int count = 0;
    for(int j = 0; j < m; j++){
        int otr = 0;
        for(int i = 0; i < n; i++){
            if(matr[i][j] < 0)
                otr++;
        }
        if(otr > 0)
            count++;
    }
    return count;
}

int main() {
    int n, m;
    cout << "n: ";
    cin >> n;
    cout << "m: ";
    cin >> m;
    
    int** matr = new int*[n];
    for(int i = 0; i < n; i++){
        matr[i] = new int[m];
    }
    
    vvod(matr, n, m);
    vyvod(matr, n, m);
    
    cout << "Ans: " << ex2(matr, n, m) << endl;
    
    for(int i = 0; i < n; i++){
        delete[]matr[i];
    }
    delete[]matr;
    
    return 0;
}
