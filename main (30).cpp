#include <iostream>

using namespace std;

int main()
{
    int count=0,sum=0;
    int a[4]={7,13,17,19};
    for (int i=25000;i<35001;i++){
        int x=i,kdel=0;
        for(int j=0;j<4;j++){
            if(x%a[j]==0){
                kdel++;
            }
        }
        if(kdel==2){
            count++;
            while(x>0){
                sum+=x%10;
                x/=10;
            }
        }
    }
    cout << count <<' '<<sum; 
}
