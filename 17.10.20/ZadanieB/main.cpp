#include <iostream>

using namespace std;
int Zeros (int x){
int c=0;
while (x!=0){
    if (x%10==0){
    c++;}
    x/=10;
    }
return c;
}
int main()
{
 int x,c;
 cin>> x;
 c=Zeros(x);
 cout<<c;
 return 0;
}
