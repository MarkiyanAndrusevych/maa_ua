#include<iostream>
#include <cmath>

using namespace std;
int main() {
   double x, y, a,b = 0;
   cout << "Введіть X : ";
   cin >> x;
cout << "Введіть Y : ";
   cin >> y;
a = (x+y)/2;
b = sqrt(x*y);
   cout << "\nСереднє арифметичне : "<< a;
   cout << "\nСереднє геометричне : "<< b<<endl;
   
}