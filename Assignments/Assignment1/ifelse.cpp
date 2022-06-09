#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not eligible");
    }
}
