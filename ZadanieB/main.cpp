#include <iostream>

using namespace std;

int main()
{
    int N,x=1;
    cin>>N;
    for(int i=1;i<=N;i++){
     x=i*x;
    }
    cout<<x;
    return 0;
}
