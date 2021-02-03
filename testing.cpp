#include <iostream>
using namespace std;
int f(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 26) {
        return 0;
    }
    if (n % 2 == 0) {
        return f(n - 1);
    }
    if (n % 2 != 0 && n > 1) {
        return f(n-1)+f((n - 1)/2);
    }

}
int main() {
    cout << f(27);
}