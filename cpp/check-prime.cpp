#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) // i is fact of n
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Number is a Prime number" << endl;
    }
    else
    {
        cout << "Number is not a prime number" << endl;
    }

    return 0;
}