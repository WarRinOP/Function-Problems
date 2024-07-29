#include <iostream>
using namespace std;
bool isprime(int p)
{
    for (int i = 2; i <= (p - 1); i++)
    {
        if (p % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cout << "Enter first digit: ";
    cin >> n;
    cout << "Enter last digit: ";
    cin >> m;
    cout << "Prime numbers from " << n << " and " << m << " are : ";
    for (int i = n; i <= m; i++)
    {
        if (isprime(i))
            cout << i<<" ";
    }
}