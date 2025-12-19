//Power of a no.

//ex:n=5,pow=4

#include<iostream>
using namespace std;
int main(){
    int n,pow,num,i;
    cout<<"Enter the value of power: ";
    cin>>pow;
    cout<<"Enter the value of n: ";
    cin>>n;
    num=n;
    for(i=1;i<pow;i=i+1)
    {
        num=num*n;
    }
    cout<<num<<endl;
    return 0;
}

