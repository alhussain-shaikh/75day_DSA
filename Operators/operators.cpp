#include<iostream>
using namespace std;

/*

1.Arithmetic : + Addition ,- subtraction,* Multipication,/ Division,% Modulus, ++ increment,-- Decrement
2.Relational : == equal to,!= not equal to ,> greater than,<less than,>= greater than equal to, <= less than equal to 
3.Logical    : && logical and, || logical or ,! logical not => (use to comapare expressions)
4.Assignment : =,+=,-=,/=,%= are some assignment operators i.e assiging the value to some variable
5.Bitwise    :  ~Bitwise Complement , << leftshift (Multiply the number by 2^n is no of bit shift)(a<<b = a*2^b), >> Right Shift (Divide the no by 2^n where n is no of bit shift)(a>>b = a/a^b),| Bitwise OR,& Bitwise AND,^ Bitwise Exclusive OR(0 ^ 0= 0 and 1 ^ 1=0)
6.Misc Operators : sizeof(),condition?Expression1(if true):Expression2(if false)(ternary Operator), Comma Operator
                  Dot(use in classes) and arrow operator(used in pointer)
                  casting operator int()
                  & Address operator i.e &a
                  * pointer operator

7.Unary Operators : + unary plus,-unary minus,  ++increment,--decrement 

Type of increment and decrement operators
    a. Pre increment : First increment the number and the return it i.e ++a.
    b. Post increment : First return the number then increment it i.e a++.


Operator Precedence Rule 
 BODMAS: Bracket over Divsion,Multiplication,Addtion, Subtraction
 Associativy (left to Right maximum)
 only conditional and Assignment operator have (Right to Left ) associativity
*/
int main(){

    int num1=6;
    int num2=3;
    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1--<<endl;
    cout<<num1<<endl;
    cout<<num2--<<endl;
    cout<<(num1==num2)<<endl;
    cout<<(num1 != num2) <<endl;
    cout<<(num1>=num2) <<endl;
    cout<<(num1%num2)<<endl;

}