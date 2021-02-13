#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x=i;
        bool isCorrect=true;
        while(x!=0){
            int y=x%10;
            if(x%10!=0 && i%y!=0){
                isCorrect=false;
            }
            x/=10;
        }
        if(isCorrect){
            cout<<i<<' ';
        }
    }

    return 0;
}
