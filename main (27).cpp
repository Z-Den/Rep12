#include <iostream>
#include <algorithm>

using namespace std;
pair<int,int> data[1000];
int n;
int f(int k){
    int c=1;
    for(int i=0;i<n;i++){
        if(data[i].second==k){
            c+=f(data[i].first);
        }
    }
    return c;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data[i].first>>data[i].second;
    }
    int k;
    cin>>k;
    cout<<f(k);
    return 0;
}
