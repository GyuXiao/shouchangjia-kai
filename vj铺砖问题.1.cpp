#include<iostream>
using namespace std;

int main()
{
    long long n, m, a, b, c, d;
    while (cin >> n >> m >> a)
    {
        (n % a) ? (b = n / a + 1) : (b = n / a);
        (m % a) ? (c = m / a + 1) : (c = m / a);
        d = b * c;
        cout << d << endl;
    }
}
