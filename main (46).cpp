#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int y=x%10;
    bool f = true;
    while(x!=0){
        if(x % 10 != y) {
            f = false;
        }
        x/=10;
    }
    if(f){
        cout<<'y';
    }else   cout<<'n';

    return 0;
}
