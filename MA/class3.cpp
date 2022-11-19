#include<iostream>
#include <string>

int main()
{
int x;
 
std::cout << "Введіть номер місяця  : ";
std::cin >> x;
x = x-1;
std::string months[] = {"Січень", "Лютий", "Березень",
                       "Квітень", "Травень", "Червень",
                       "Лютий", "Серпень", "Вересень",
                       "Жовтень", "Листопад", "Грудень"
                      };
 
std::cout<<months[x]<<std::endl;
return 0;
}