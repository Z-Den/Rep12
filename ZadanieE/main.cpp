#include <iostream>

using namespace std;

int main()
{
int a,n,sum=1,x,m;
cin>>a>>n;
sum+=a;
for (int i=1;i<n;i++){
        m=a*a;
        x = m * a;
        sum+=x;
}
cout<<sum;
    return 0;
}
