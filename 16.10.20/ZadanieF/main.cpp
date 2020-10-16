#include <iostream>

using namespace std;

int main()
{
int n,x,c=0;
cin>>x;
n=x;
while (x!=0){
if (x>n){
    c++;}
    n=x;
    cin>>x;
}
cout<<c;
return 0;
}
