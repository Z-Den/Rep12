#include <iostream>

using namespace std;

int main()
{
    int D,d=2;
    cin>>D;
    while (D%d>0){
        d++;
        if (D%d==0) break;
    }

    cout<<d;
    return 0;
}
