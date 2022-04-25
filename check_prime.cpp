#include <iostream>
using namespace std;

// Brute Force method
// T.C - O(n)
bool is_prime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Optimised method
// T.C - O(sqrt(n))
bool is_prime_opt(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << is_prime_opt(n) << "\n";
    return 0;
}