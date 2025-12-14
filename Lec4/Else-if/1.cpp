//Given a no. 
//Tell if no. is +ve, -ve, or zero

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    if(n>0)
    {
        cout<<"Positive";
    }
    else if(n==0)
    {
        cout<<"Zero";
    }
    else
    {
        cout<<"Negative";
    }
    return 0;

}