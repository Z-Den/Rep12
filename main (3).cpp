#include <iostream>

using namespace std;
string f(string s, int i){
    string s1(1,s[i]);
    if (i==s.size()-1){
        return s1;
    }
    string n="*";
    return s1+n+f(s,i+1);
}

int main()
{
    string s;
    int i=0;
    cin>>s;
    cout<<f(s,i);

    return 0;
}
