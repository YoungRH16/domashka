//
//  main.cpp
//  dom_kr_1sem
//
//  Created by Альберт Закиров on 01.02.2025.
//

#include <iostream>
using namespace std;


void vvodMas(int* mas, int n){
    cout << "Enter mas: ";
    for(int i = 0; i < n; i++){
        cin >> mas[i];
    }
}

void vyvodMas(int* mas, int n){
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << mas[i] << " ";
    }
    cout << endl;
}

int ex1(int*mas, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(mas[i] % 2 == 0)
            count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int* mas = new int[n]{};
    vvodMas(mas, n);
    vyvodMas(mas, n);
    cout << "Ans: " << ex1(mas, n) << endl;
    delete[]mas;
    return 0;
}

