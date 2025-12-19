//Sum of n natural no.

#include<iostream>
using namespace std;
int main(){
    int i,sum,n;
    cout<<"Enter the value of N: ";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i=i+1)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;

}
