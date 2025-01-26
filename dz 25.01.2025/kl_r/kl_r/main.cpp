//
//  main.cpp
//  kl_r
//
//  Created by Альберт Закиров on 26.01.2025.
//

#include <iostream>
using namespace std;

int len(char* str, int n){
    int e = 0;
    for(int i = 0; i< n; i++){
        if(str[i] == '\0'){
            return e;
        }
        e++;
    }
    return e;
}

char* append(char* str, int n, char a){
    char* str_add = new char[len(str, n)+2];
    int i = 0;
    for(;i<len(str, n);i++){
        str_add[i] = str[i];
    }
    str_add[i+1] = a;
    str[i+1] = '\0';
    return str_add;
}

int Count_Words(char* s)
{
  int count = 0;
  int i = 0;
  if (s[i] == ' ' or s[i] == '\0')
    count = 0;
  else count = 1;
  while (s[i] != '\0')
  {
    if (s[i] == ' ' && s[i + 1] != '\0' && s[i + 1] != ' ')
      count++;
    i++;
  }
  return count;
}

int Count_Words2(char* s)
{
  int count = 0;
  int i = 0;
  if (s[i] == ' ' or s[i] == '\0')
    count = 0;
  else count = 1;
  i++;

  while (s[i] != '\0')
  {
    if (s[i-1]==' ' && s[i] != ' ')
      count++;
    i++;
  }
  return count;
}
char* Max_word(char*s)
{
  int max =0;
  int imax = 0;
  int i = 0;
  while (s[i] != '\0')
  {
    while (s[i] == ' ')
      i++;

    int k = 0;
    while (s[i] != ' ' && s[i] != '\0')
    {
      k++;
      i++;
    }
    if (max < k)
    {
      max = k;
      imax = i - k;
    }
  }
  if (max > 0)
  {
    char* temp = new char[max + 1];
    for (i = imax; i < imax + max; ++i)
    {
      temp[i - imax]=s[i];
    }
    temp[max] = '\0';
    return temp;
  }
  else
  {
    cout << "ERROR" << endl;
    return new char[2]{ " " };
  }

}

bool findWord(char* str1, char* str2, int n){
    int l = len(str1, n);
    for(int i = 0; i <= n - l; i++){
        bool p = true;
        for(int j = 0; j < l; j++){
            bool pn = (str1[j] == str2[i+j]);
            p = p and pn;
        }
        if(p == true){
            return true;
        }
    }
    return false;
}

/*char* corrector(char* str, int n){
    char* str1 = new char[n];
    for(int i = 0; i < n; i++){
        if(str[i])
    }
    char* corstr = new char[n];
    for(int i = 1; i < n - 1; i++){
        if(str1[i] != ' '){
            corstr = append(corstr, n, str1[i]);
        }else if(str1[i-1] != ' ' )
    }
}*/


int main()
{
  
  /*char* str = new char[n] {'a', 'b', 'c', '\0'};
  for (int i = 0; i < n; i++)
    cout << str[i] << " ";
  cout << 1 << endl;
  cin >> strl;
  cout << strl;*/
/*cout << strl<<endl;*/

    //1
    int n = 100;
    char* strl = new char[n];
    cin.getline(strl, n - 1);
    
  
    /*int c = 0
    for (int i=0; strl[i] != '\0'; i++)
        c++;
    cout << c<<endl;*/
    //2
    //cout << Count_Words(strl) << endl;
    //cout << Count_Words2(strl) << endl;
    //3
    //cout << Max_word(strl) << endl;
    
    /*//4
    char* str2 = new char[n];
    cin.getline(str2, n - 1);
    
    char* str1 = new char[n];
    str1[0] = ' ';
    for(int i = 1; i <= len(strl, n); i++)
        str1[i] = strl[i - 1];
    str1[len(strl, n) + 1] = ' ';
    cout << findWord(str1, str2, n) << endl;
     
    delete[]str1
    delete[]str2*/
    
    //5
    char* str1 = new char[n+2];
    str1[0] = ' ';
    for(int i = 1; i <= len(strl, n); i++)
        str1[i] = strl[i - 1];
    str1[len(strl, n) + 1] = ' ';
    //corrector(str1, n+2)
    
    
    delete[]strl;
}
