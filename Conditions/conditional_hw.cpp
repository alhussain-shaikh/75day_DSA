/*
Q1 - Write a program which takes the values of length and breadth from user and check if it is
a square or not.

Sample Input :
Enter length: 5
Enter breadth: 4
Sample Output : It is a rectangle

*/
#include<iostream>
using namespace std;
int main(){

    int lenght ,breadth;
    cout<<"Enter the length: ";
    cin>>lenght;
    cout<<"Enter the breadth: ";
    cin>>breadth;
    (lenght==breadth)?cout<<"It is Sqaure":cout<<"It is Rectangle";
    return 0;
}