//
//  main.cpp
//  kl_r1
//
//  Created by Альберт Закиров on 18.01.2025.
//

#include <iostream>
#include <cmath>
using namespace std;

int fact(int n){
    if (n == 1){
        return 1;
    }
    return n * fact(n - 1);
}

int fib(int n){
    if(n == 0 or n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
    
}

int nod(int a, int b){
    if(a == b){
        return a;
    }
    if(a > b){
        return nod(a - b, b);
    }
    return nod(a, b - a);
}

double b(double n){
    if (n == 1){
        return 5;
    }
    return b(n-1) / ((n - 1)*(n - 1) + n);
}

void stars3_r(int n){
    for(int i = 0; i < (n / 2) + 1; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int h = 0; h < (n - (2 * i)); h++){
            cout << "*";
        }
        cout << endl;
    }
}

void stars3(int n){
    for(int i = 0; i < (n / 2) + 1; i++){
        for(int j = ((n/2) - i); j > 0; j-- ){
            cout << " ";
        }
        for(int h = 0; h < (i*2 + 1); h++){
            cout << "*";
        }
        cout << endl;
    }
}

void stars4(int n){
    stars3_r(n);
    stars3(n);
}

int ack(int n, int m){
    if(n == 0){
        return (m+1);
    }else if(m == 0){
        return ack(n-1, 1);
    }
    return(ack(n-1, ack(n, m - 1)));
}

void stars1(int n){
    for(int i = 1; i < (n+1); i++){
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
    //cout << "factorial: " << fact(4) << endl;
    //cout << "fib: " << fib(4) << endl;
    //cout << "nod: " << nod(120, 25) << endl;
    //cout << "n-chlen b: " << b(2) << endl;
    cout << "Ackerman: " << ack(3, 7) << endl << endl;
    //stars1(6);
    cout << endl;
    //stars2(5);
    cout << endl;
    //stars3(5);
    cout << endl;
    //stars4(7);
    cout << endl;
    return 0;
}


