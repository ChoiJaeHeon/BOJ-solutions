#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int a[3];

    while (true) {
        cin >> a[0] >> a[1] >> a[2];
        if(a[0] == 0 && a[1] == 0 && a[2] == 0)
            break;
        else {
            sort(a, a+3);
            if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
                cout << "right" << '\n';
            else
                cout << "wrong" << '\n';
        }
    }
    return 0;
}