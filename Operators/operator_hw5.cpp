/*
Q5 - Write a program to calculate the sum of digits of a 3 digit number.

Sample Input : 123
Sample Output : 6

*/

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the 3 digit number: ";
    cin>>num;
    int a=num/100;
    int b=(num/10)%10;
    int c=(num%10);
    cout<<"The sum of 3 digit number is : "<<a+b+c;
}