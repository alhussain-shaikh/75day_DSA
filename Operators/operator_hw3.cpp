/*
Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

Sample Input : 45
Sample Output : 19
*/

#include<iostream>
using namespace std;
int main()
{
    int totalStudent,boys,girls,AgradeBoys;
    cout<<"Enter the total No of student: ";
    cin>>totalStudent;
    cout<<"No of boys in class: ";
    cin>>boys;
    cout<<"No of boys received A grade: ";
    cin>>AgradeBoys;
    int noOfA_grade=totalStudent*0.8;
    girls=noOfA_grade-AgradeBoys;
    cout<<"No of A grade girls "<<girls<<endl;
} 
