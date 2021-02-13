#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    for(int i=100;i<1000000;i++){
        int x=i,n=3,sum=0;
        if(i>999){n=4;}
        if(i>9999){n=5;}
        if(i>99999){n=6;}
        while(x!=0){
            sum+=pow(x%10,n);
            x/=10;
        }
        if(sum==i){
        cout<<sum<<' ';
        }
    }

    return 0;
}
