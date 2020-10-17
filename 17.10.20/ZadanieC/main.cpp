#include <iostream>

using namespace std;
int MaxDigit(int x){
    int m4x=0;
    while (x!=0){
        if(x%10>m4x){
            m4x=x%10;
        }
        x/=10;
    }
    return m4x;
}
int MinDigit (int x){
    int m1n=10;
    while (x!=0){
        if (x%10<m1n){
            m1n=x%10;
        }
    x/=10;
    }
    return m1n;
}
int main(){
    int x,m1n,m4x;
    cin>>x;
    m4x=MaxDigit(x);
    m1n=MinDigit(x);
    cout<<m1n<<' '<<m4x;
    return 0;
}
