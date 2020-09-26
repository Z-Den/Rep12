#include <iostream>

using namespace std;

int main()
{
int a,n,sum=1,x;
cin>>a>>n;
sum+=a;
for (int i=1;i<n;i++){
        x=a*a;
        sum+=x;
}
cout<<sum;
    return 0;
}
