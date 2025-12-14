//Print all even no.

#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter your number:";
    cin>>n;
    for(i=2;i<=n;i=i+2)
    {
        cout<<i<<endl;
    }
    return 0;
}