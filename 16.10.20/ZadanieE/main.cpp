#include <iostream>

using namespace std;

int main()
{
int c=0,x;
cin>>x;
while (x!=0){
    if (x>c){
        c=x;
    }
    cin>>x;
}
cout<<c;
return 0;
}
