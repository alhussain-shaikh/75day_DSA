#include<iostream>
using namespace std;
int main(){
    int row, column;
    cout<<"Enter no of rows: ";
    cin>>row;
    cout<<"Enter no of columns: ";
    cin>>column;
    cout<<endl;
    /*
    Print this pattern
    ******
    ******
    ******
    
    */
    for(int i=1;i<row;i++){
        for(int j=1;j<=column;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    /*
    Print the following Pattern
    
    ******
    *    *
    *    *
    ******

    */

    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1 || i==row || j==1 || j==column){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }

    cout<<endl;
    /*
    Print the following pattern
    *
    **
    ***
    ****

    */
   for(int i=1;i<=row;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";

    }
    cout<<endl;
   }
   cout<<endl;
   /*
   Print the following pattern 

   ****
   ***
   **
   *
   
   */
  for(int i=1;i<=row;i++){
    for(int j=column;j>=i;j--){
        cout<<"*";
    }cout<<endl;
  }
  cout<<endl;

  /*
  Print the following pattern
  
    *
   ***
  *****
 *******
   

  */
 for(int i=1;i<row;i++){
    while(i<=i-row){
        cout<<" ";
    }cout<<"*";
 }
 
}