#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x!=0){
        int y=x%10;
        x/=10;
        if(x%10==y){
            cout<<'y';
            return 0;
        }
    }
    cout<<'n';

    return 0;
}
