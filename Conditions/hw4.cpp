/*
Q4- Write a program to print positive number entered by the user, if user enters a negative
number, it is skipped.

Sample Input : Enter an integer: -6
Sample Output : The number is negative and skipped

*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    (num>0)?cout<<"The number is "<<num:cout<<"The number is negative and skipped";
    return 0;

}