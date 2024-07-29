#include <iostream>
using namespace std;
int reverse(int num)
{
    int lastdigit, rev = 0;
    while (num > 0)
    {
        lastdigit = num % 10;
        rev = rev * 10 + lastdigit;
        num /= 10;
    }
    return rev;
}
int main()
{
    int num;
    cout << "Enter your digit: ";
    cin >> num;
    cout << "Reverse of the number is " << reverse(num);
}
