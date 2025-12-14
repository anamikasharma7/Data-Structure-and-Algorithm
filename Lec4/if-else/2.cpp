//Marks is given
//If Marks is greater than 33 then pass
//If Marks is less than 33 then fail

#include<iostream>
using namespace std;
int main(){
    int Marks;
    cout<<"Enter the Marks: ";
    cin>>Marks;
    if(Marks>33)
    {
        cout<<"Pass";
}
else
{
    cout<<"Fail";
}
return 0;
}