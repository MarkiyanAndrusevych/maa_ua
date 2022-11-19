#include<iostream>
#include <cmath>
using namespace std;
int main() {
   double x,y;
   cout << "Введіть значення x : ";
   cin >> x;
   y = pow(x, 8.) + pow(8., x);
   y = pow(y, 1/8.); 
 
   cout << "\nФункція f(x) : "<< y<<endl;
}   