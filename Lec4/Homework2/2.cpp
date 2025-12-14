//Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

#include<iostream>
using namespace std;
int main(){
    int Age;
    cin>>Age;
    if(Age>18)
    {
        cout<<"Adult";
    }
    else
    {
        cout<<"Teenager";
    }
    return 0;
}