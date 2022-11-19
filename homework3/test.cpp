#include<iostream>
#include<math.h>
using namespace std;

int main() {
int x1=0;
double x2=5.0/8.0;
double y[]={x1, x2};

for (int i=3; i<=23; i++){
    cout <<"\nb"<< i-2 << "= " << y[i-3] ;
    y[i-1]= y[i-2]/2 + (3.0/4.0)*y[i-3];
}
} 