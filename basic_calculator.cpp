#include <iostream>
using namespace std;

int main()
{
    int num1,num2,result;
    char op;
    cout<<"Enter your two number: "<<endl;
    cin>>num1;
    cin>>num2;
    cout<<"Enter the operator for calculation : "<<endl;
    cout<<" '+' for Addition, '-' for Subtraction, '*' for Multiplication and '/' for Division"<<endl;
    cin>>op;

    if (op == '+')
    {
        result = num1 + num2;
        cout<< "The Addition of your given two number is: "<<result<<endl;
    }
    else if (op == '-')
    {
        result = num1 - num2;
        cout<< "The Subtraction of your given two number is: "<<result<<endl;
    }
    
    else if (op == '*')
    {
        result = num1 * num2;
        cout<< "The Multiplication of your given two number is: "<<result<<endl;
    }

    else if (op == '/')
    {
        result = num1 / num2;    
        cout<< "The Division of your given two number is: "<<result<<endl;
    }
    else 
    {
        cout<<"Invalid input choose the correct value and operator."<<endl;
    }
    return 0;
}