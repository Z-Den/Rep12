#include <iostream>

using namespace std;

int main()
{
int x,m1=0,m2=0;
cin>>x;
while (x!=0){
if (x>m1){
    m2=m1;
    m1=x;
}
        else
        if (x<=m1 and x>m2){
            m2=x;

}
cin>>x;
}
cout<<m2;
return 0;
}
