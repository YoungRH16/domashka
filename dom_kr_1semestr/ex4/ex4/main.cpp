//
//  main.cpp
//  ex4
//
//  Created by Альберт Закиров on 01.02.2025.
//

#include <iostream>
using namespace std;

void vvod(int* mas, int n){
    cout << "Enter sorted mas: ";
    for(int i = 0; i < n; i++){
        cin >> mas[i];
    }
}

int bin(int* mas, int t, int beg, int end){
    int mid = beg + (end - beg) / 2;

    if (mas[mid] == t) {
        return mid;
    } else if (mas[mid] > t) {
        return bin(mas, beg, mid - 1, t);
    } else {
        return bin(mas, mid + 1, end, t);
    }
}

int main() {
    int n, t;
    cout << "Enter number of elements: ";
    cin >> n;
    int* mas = new int[n];
    vvod(mas, n);
    cout << "Enter target element from mas: ";
    cin >> t;
    cout << "index: "<< bin(mas, t, 0, n) << endl;
    delete[]mas;
    return 0;
}
