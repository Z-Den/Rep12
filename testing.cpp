#include <iostream>
using namespace std;
int f(int n) {
    if (n == 8 || n == 2 || n == 1) {
        return 0;
    }
    if (n == 3) {
        return 1;
    }
    if (n > 3) {
        return f(n - 1);
    }
    if (n > 4) {
        return f(n - 1) + f(n - 2);
    }
    if (n > 5) {
        return f(n - 1) + f(n - 2) + f(n - 3);
    }
}
int main() {
    for (int n = 1; n <= 15; n++) {
        cout << f(n)<<endl;
    }
}