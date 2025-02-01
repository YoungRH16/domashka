//
//  main.cpp
//  dz 13.01.2025
//
//  Created by Альберт Закиров on 01.02.2025.
//

#include <iostream>
using namespace std;

//1//
bool Election(bool x, bool y, bool z)
{
    int c = 0;
    if (x == true) c += 1;
    if (y == true) c += 1;
    if (z == true) c += 1;
    if (c == 3 or c == 2) return true;
    if (c == 1 or c == 0) return false;
}
int main()
{
    bool x, y, z;
    cout << "x, y, z:";
    cin >> x >> y >> z;
    cout << Election(x, y, z);
}

//2//
bool simple(int n)
{
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "¬‚Â‰ËÚÂ ˜ËÒÎÓ: ";
    cin >> n;
    cout << simple(n);

}

//3//
int chukcha(bool n)
{
    int m = 1;
    for (int i = 1; i < 10; i++)
    {
        m += pow(10, i);
        if (m % n == 0) return m;
    }
    return 0;
}
int main()
{
    cout << chukcha(13);
}

//4//
void fourthTask(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            prod += temp;
        }
        sum += prod;
    }
    cout << "The answer is: " << sum;
    return;
}

//5//
int fifthTask(int n, int m) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            int temp = 0;
            cin >> temp;
            sum += temp;
        }
        if (sum > max) max = sum;
    }
    return max;
}
int main()
{
    cout << fifthTask(3, 3);
}

