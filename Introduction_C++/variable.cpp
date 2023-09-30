#include<iostream>
using namespace std;

int main(){
    /*
    variable name should be in camel case.
    Rule1 : variable should not start with number.
    Rule2 : Whitespace is not permitted in variable names.
    Rule3 : Variable name should not be a key word 
    Rule4 : It is preferred to use variable name with more than one word with all lowercase letter for the first word and capitalization of the first letter of each subsequest word.
    Rule5 : When creating variable, it is preferred to give them meaningful names,i.e int numberOfApple
    Rule6 : All lowercase letters should be used when creating one-word variable  
    */
    int a=10;//variable is a and datatype is integer
    cout<<a<<endl;

    /*
    C++ identifiers (class ,methord , variables)

    Rule1 : All identifiers should begin with a letter(A to Z or a to z),currency character($) or an underscore(_).
    Rule2 : After the first character, identifier can have any combination of charcter
    Rule3 : A keyword cannot be used as an identifier
    Rule4 : The identifiers are case sensitive
    Rule5 : WHitespace should not be there.
    */

   /*
   Example of legel      illege
              (_2abc)    (2_abc)
   */
  
  /*
   Example of Primary Data Type
   1.Integer- 4 Byte- 2^32 values can be stored in the integer datatype
   2.Charater- 1 Bytes (this is in single quotes)
   3.Boolean-  1 Byte   
   4.Floating- 4 Bytes-to Store decimal(7 decimal Palaces) and exponentials
   5.Double floating- 8 Bytes - upto 15 decimal places
   6.void- This have null value 
   7.Wide character- 2 Bytes/4 Bytes 
   8.String- Not fixed(Dynamic Memory Allocation)- To store sequence of data type (this is in double quotes) 


  
  */

    int apples;
    cout<<"Enter the no of apples in the basket ";
    cin>>apples;
    cout<<"No of apples :"<<apples;

    
}