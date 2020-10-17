#include <iostream>

using namespace std;

int main(){
    int N,c=0;
    cin>>N;
    while(N!=0){
        c=N%2;
        N/=2;
        cout<<c;
    }
    return 0;
}
