//MNC Interview crack
//If package is greater than 10 then accepted and if less than 10 then rejected

#include<iostream>
using namespace std;
int main(){
    int Package;
    cout<<"Enter the Package: ";
    cin>>Package;
    if(Package>10)
    {
        cout<<"Accepted"<<endl;
    }
    else
    {
        cout<<"Rejected"<<endl;
    }
    return 0;


}