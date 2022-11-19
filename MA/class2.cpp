#include<iostream>
using namespace std;
int main() {
   int x;
 
   cout << "Введіть код стану HTPP  : ";
   cin >> x;
   if (x==401)
   {
       cout<<"401- Access allowed only for registered users"<<endl;
   } 
    else 
  {      if (x==507)
        cout<<"507- Insufficient Storage"<<endl;
        else
        cout<<"wrong code"<<endl;
  }
}