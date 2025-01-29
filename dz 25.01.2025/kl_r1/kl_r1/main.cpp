//
//  main.cpp
//  kl_r1
//
//  Created by Альберт Закиров on 27.01.2025.
//

#include <iostream>
using namespace std;
 
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
    cout << s << endl;
}
 
int main()
{
    f();
}
