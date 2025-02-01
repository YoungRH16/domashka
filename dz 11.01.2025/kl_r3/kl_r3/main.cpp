//
//  main.cpp
//  kl_r3
//
//  Created by Альберт Закиров on 12.01.2025.
//

#include <iostream>

#include <iostream>
using namespace std;


void inputMass(int mass[], int size) {
    cout << "Введите элементы массива:";
    for (int i = 0; i < size; i++) {
        cin >> mass[i];
    }
    cout << endl;
}

int maxElement(int mass[], int size) {
    int max = mass[0];
    for (int i = 0; i < size; i++) {
        if (mass[i] > max)
            max = mass[i];
    }

    return max;
}

int main() {
    int arr[5];
    inputMass(arr, 5);
    cout << "Max element:" << maxElement(arr, 5);
}
