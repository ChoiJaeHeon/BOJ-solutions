#include <iostream>

using namespace std;

long long fibonacci(int n) {

    if (n ==0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main() {

    int n;
    long long res = 0;

    cin >> n;

    res = fibonacci(n);

    cout << res;
    return 0;
}