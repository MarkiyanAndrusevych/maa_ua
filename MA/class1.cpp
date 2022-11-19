#include<iostream>
using namespace std;
int main() {
   int x, s = 0;
   cout << "Введіть трьохзначне число : ";
   cin >> x;
   while (x != 0) {
      s = s + x % 10;
     x  = x / 10;
   }
   cout << "\nСума цифр : "<< s;
}