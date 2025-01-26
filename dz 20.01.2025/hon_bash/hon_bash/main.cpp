//
//  main.cpp
//  hon_bash
//
//  Created by Альберт Закиров on 20.01.2025.
//

#include <iostream>
using namespace std;

void HannoiTowerRec(int a, int b, int c, int n){
    if(n == 1){
        cout << a << "->" << b << endl;
        return;
    }
    else{
        //перенсем башню размером (n-1) на вспомогательнйы стержень
        HannoiTowerRec(a, c, b, n-1);
        //перенесем последнее кольцо на стержень b
        cout << a << "->" << b << endl;
        //перенесем башню (n - 1) на стержеь b
        HannoiTowerRec(c, b, a, n - 1);
    }
}


void HannoiTower(){
    int n, a, b, c; //n - количество колец, a: стержень - источник
    //b: стержень приемник, c: вспомгательный стержень
    cout << "введите кол-во колец ";
    cin >> n;
    cout << "введите номер стержня-источника ";
    cin >> a;
    cout << "введите номер стержня приемника ";
    cin >> b;
    c = 6 - a - b;
    HannoiTowerRec(a, b, c, n);
}



int main() {
    //HannoiTower();
    return 0;
}
