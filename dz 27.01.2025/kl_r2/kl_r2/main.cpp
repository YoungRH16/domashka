//
//  main.cpp
//  kl_r2
//
//  Created by Альберт Закиров on 29.01.2025.
//

#include <iostream>
using namespace std;

int max_len_word(char* s) {
    int max_len = -1;
    int i = 0;
    int k = 0;
    while (s[i]!='\0') {
        if (s[i] != ' ')
        {
            k++;
        }
        else
        {
            if (k > max_len) max_len = k;
            k = 0;
        }
        i++;
    }
    if (k > max_len) max_len = k;
    return max_len;
}

void out_words(char* s, int len) {
    int i = 0;
    int k = 0;
    while (s[i]!='\0') {
        if (s[i] != ' ') {
            k++;
        } else {
            if (k==len) {
                for(int j = i-k; j < i; j++) {
                    cout << s[j];
                }
                cout << " ";
            }
            k = 0;
        }
        i++;
    }
    if (k==len) {
                for(int j = i-k; j < i; j++) {
                    cout << s[j];
                }
                cout << " ";
            }
}

void f() {
    char s[100];
    cin.getline(s, 100);
    out_words(s, max_len_word(s));
}

void parse_words(char* s)
{
    int i = 0;
    int k = 0;
    bool a = false;
    while (s[i] != '\0') {
        if (s[i] != ' ') {
            k++;
            if (s[i] == 'a' || s[i] == 'A') a = true;
        } else {
            if (!a && k>0) {
                for (int j = i-k; j<i; j++) {
                    cout << s[j];
                }
                cout << " ";
            }
            k = 0;
            a = false;
        }
        i++;
    }
    if (!a && k>0) {
        for (int j = i-k; j<i; j++) {
            cout << s[j];
        }
    }
}

int char_len(char* s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

void print_words(char* s, int length) {
    int k = 0;
    int i = length-1;
    for(; i >= 0; i--) {
        if (s[i] != ' ') {
            k++;
        } else {
            if (k > 0) {
                for (int j = i+1; j < i+k+1; j++) {
                    cout << s[j];
                }
                cout << " ";
            }
            k = 0;
        }
    }
    if (k > 0) {
        for (int j = i+1; j < i+k+1; j++) {
            cout << s[j];
        }
        cout << " ";
    }
}


int main() {
    f();
}
