//
//  main.cpp
//  kl_r1
//
//  Created by Альберт Закиров on 27.01.2025.
//

#include <iostream>
using namespace std;

void task4(){
    char s[100];    cin.getline(s, 100);
    int i = 0;    int temp = 0;
    int kol = 0; //кол-во пробелов    while (s[i] != '\0')
    {        while (s[i] == ' ')
        {            i++;
            kol++;        }
        temp = 0;
        while (s[i] != ' ' && s[i] != '\0')        {
            temp++;            i++;
        }        int m = temp / 2;
        for (int j = i - temp, k = i - 1; j < k; j++, k--)        {
            swap(s[j], s[k]);        }
    }
    cout << s << endl;
}

void f()
{
    char s[100];
    cin.getline(s, 100);
    int i = 0, k = 0;
    while (s[i] != '\0')
    {
        while (s[i] == ' ')
        {
            k++;
            i++;
        }
        while (s[i] != ' ' && s[i] != '\0')
        {
            s[i - k] = s[i];
            i++;
        }
        s[i - k] = s[i];
        if (s[i] != '\0')
            i++;
    }
}
 
int main()
{
    //f();
    //task4();
}
