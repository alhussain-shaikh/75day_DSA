/*
Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.
Sample Input: 1,2,3,4,5
Sample Output: 1111

*/
#include<iostream>
using namespace std;
int main(){
    int sum=0,ans=0,power=1;
    for(int i=1;i<6;i++){
        sum+=i;
    }
    while(sum>0){
        int parity=sum%2;
        ans+=parity*power;
        power*=10;
        sum/=2;
    }
    cout<<"Sum of first 5 decimal number is "<<ans<<endl;
    
}