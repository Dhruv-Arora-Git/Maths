#include <iostream>
using namespace std;

// Bruteforce method
// T.C - O(n)
void prime_fact(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << i << " ^ " << cnt << "\n";
        }
    }
}

// Optimised method
// T.C - O(sqrt(n))

void prime_fact_opt(int n)
{
    // theory : there exists a prime factor of n below sqrt(n)
    for (int i = 2; i * i <= n; ++i) // i * i <= n is better than i <= sqrt(n), as sqrt() takes O(log n) extra time
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            cout << i << " ^ " << cnt << "\n";
        }
    }

    if (n > 1) // if number is itself prime, no prime factor under sqrt(n)
        cout << n << " ^ " << 1 << "\n";
}

int main()
{
    int n;
    cin >> n;
    prime_fact_opt(n);

    return 0;
}