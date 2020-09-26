#include <iostream>
using namespace std;

int main()
{
    int n,x,sum=0,y=1;
    cin>>n;
    for (int i=0;i<n;i++){
        x=y*y;
        y=y+1;
        sum=sum+x;
    }
    cout<< sum;
    return 0;
}
