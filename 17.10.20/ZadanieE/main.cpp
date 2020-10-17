#include <iostream>

using namespace std;
int reserve(int n){
    int x;
    while (n!=0){
        x=x*10+n%10;
        n/=10;
    }
    return x;
}
int main()
{
    int n,x;
    cin>> n;
    x=reserve(n);
    cout<<x;
    return 0;
}
