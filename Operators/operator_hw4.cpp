/*
Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
    
Sample Input : 12345
Sample Output : 1+4=5
*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the a 5 digit Number:";
    cin>>num;
    int a=num/10000;
    // cout<<a;
    int b=(num%100)/10;
    cout<<a+b;
}