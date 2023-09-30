/*
Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
Sample Input : 8 10
Sample Output :
Sum = 18
Difference = -2
Product = 80
Division = 0.8
*/

#include<iostream>
using namespace std;

int main(){
    float  a,b;
    int choice;
    cout<<"Enter the num1: ";
    cin>>a;
    cout<<"Enter the num2: ";
    cin>>b;
    for(int i=0;i<4;i++){
        cout<<"Choose the following operation: "<<endl;
        cout<<"1.Sum"<<endl;
        cout<<"2.Diffrence"<<endl;
        cout<<"3.Product"<<endl;
        cout<<"4.Division"<<endl;
        cin>>choice;
        switch (choice)
        {
        case (1):
            cout<<"Sum = "<<a+b<<endl;
            break;
        case (2):
            cout<<"Difference = "<<a-b<<endl;
            break;
        case (3):
            cout<<"Product = "<<a*b<<endl;
            break;
        case(4):
            cout<<"Division = "<<a/b<<endl;
            break;
        default:
            cout<<"Invalid Input"<<endl;
            break;
        }

    }
}