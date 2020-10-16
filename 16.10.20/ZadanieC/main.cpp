#include <iostream>

using namespace std;

int main()
{
    double sum=0,c=0;
double x;
cin>>x;
while (x!=0){
    sum+=x;
    c++;
    cin>>x;
}
cout<<sum/c;
return 0;
}
