/*
Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.
Sample Input :
Enter an operator (+, -, *, /): -
Enter two numbers:
6
8
Sample Output : 6 - 8 = -2
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter an operator (+,-,*,/):- ";
    cin>>op;
    cout<<"Enter num1 and num2: ";
    cin>>a;
    cin>>b;
    switch (op)
    {
    case ('+'):
        cout<<a<<" + "<<b<<" = "<<a+b;
        break;
    case ('-'):
        cout<<a<<" - "<<b<<" = "<<a-b;
        break;
    case('*'):
        cout<<a<<" * "<<b<<" = "<<a*b;
        break;
    case('/'):
        cout<<a<<" / "<<b<<" = "<<a/b;
        break;
    default:
        cout<<"Invaild choice!";
        break;
    }
}