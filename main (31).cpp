#include <iostream>

using namespace std;

int main()
{
    int count=0,sum=0,ss=0;
    int a[4]={7,13,11,19};
    for (int i=20000;i<30001;i++){
        int x=i,kdel=0;
        for(int j=0;j<4;j++){
            if(x%a[j]==0){
                kdel++;
            }
        }
        if(kdel==2){
            count++;
            sum+=x;
            
        }
    }
    ss=sum/count;
    cout << count <<' '<<ss; 
}
