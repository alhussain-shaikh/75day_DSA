/*
Q2 - Write a program to print absolute value of a number entered by the user.
Sample Input: -1
Sample Output: 1

*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Value of num: ";
    cin>>num;
    num=abs(num);
    cout<<"Absolute value of num is : "<<num<<endl;
    return 0;

}