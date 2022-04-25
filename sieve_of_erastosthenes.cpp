#include <iostream>
#include <vector>

using namespace std;

const int maxn = 1000000; // 10^6

bool sieve_arr[maxn + 1]; // global array, by default all elements are false
// false -> prime, true -> not prime

vector<int> primes; // to store all primes

// T.C - O(n * log(log(n)))
void sieve()
{
    sieve_arr[0] = sieve_arr[1] = true;

    for (int i = 2; i * i <= maxn; ++i)
    {
        if (sieve_arr[i] == false)
        { // can write if(!sieve_arr[i]) too
            for (int j = i * i; j <= maxn; j += i)
            {
                sieve_arr[j] = true;
            }
        }
    }
    // now sieve array is ready
    // push all false (prime) elements to primes vector

    for (int i = 2; i <= maxn; ++i)
    {
        if (sieve_arr[i] == false)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    sieve();

    cout << n << "th Prime is : " << primes[n - 1] << "\n";

    return 0;
}