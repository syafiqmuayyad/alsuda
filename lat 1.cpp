#include <iostream>
#include <string.h>

using namespace std;

int main()
{
 char huruf[6] = {'p', 'e', 'n', 's', 'i', 't'};

 printf("Kata sebelum dibalik : 'p', 'e', 'n', 's', 'i','t'\n");
 printf("Kata setelah dibalik : ");

 for(int i = 5; i >= 0; i--)
 {
  cout << huruf[i];
 }
}

