#include <iostream>

using namespace std;
int main()
{
    long long n;
    long long d;
    int i = 10;
    long long s = 0;
    int t = 10;
    
    cout << "Введіть ціле число: ";
    cin >> n;
    
    while (n > 0)
    {
        d = n % 10;

        if (d == 0 || d == 5)
        {
            n = n / 10;
        }
        else
        {
            s = s + (t / 10) * d;
            n = n / 10;
            t = t * 10;
        }
    }
    cout << s;
}
