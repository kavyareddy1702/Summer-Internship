#include<iostream>
using namespace std;
int main()
{
    int op, num1, num2;
    cout<<"-----C A L C U L A T O R-----\n";
    cout<<"Select operation\n";
    cout<<"1. Addition";
    cout<<"2. Subtration\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    cout<<"5. Modulus\n";    
    cin>>op;
    cout<<"Enter two numbers: \n";
    cout<<"Enter 1st number: \n";
    cin>>num1;
    cout<<"Enter 2nd number: \n";
    cin>>num2;
    switch(op){
        case 1: 
        cout<<(num1+num2);
        break;
        case 2: 
        cout<<(num1-num2);
        break;
        case 3: 
        cout<<(num1*num2);
        break;
        case 4:
        cout<<(num1/num2);
        break;
        case 5: 
        cout<<(num1%num2);
        break;
        default:
        cout<<"Invalid choice";
    }
}