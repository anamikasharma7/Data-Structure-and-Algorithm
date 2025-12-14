//Given a number chacek if it is even or odd

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your no.: ";
    cin>>n;
    if(n%2==0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    return 0;
}