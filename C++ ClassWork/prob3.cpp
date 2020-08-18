#include<iostream>
using namespace std;

int main(){
int a,b,c,d;
cout << "Enter a, b, c, d values" << endl;
cin >> a >> b >> c >> d;

/*Constant expressions - only constants in expr*/
int ab;
ab = 2+3/4-5;
cout << "2+3/4-5 = " <<ab << endl;

/*Arithmetic operations - +, -, *, /, % */
cout << "add " << a+b << endl;
cout << "sub " << a-b << endl;
cout << "multiply " << a*b << endl;
cout << "divide " << a/b << endl;
cout << "modulus " << a%b << endl;

/*Logical operations - &&, ||, ! */
cout << "a logical and b " << (a && b) << endl;
cout << "a logical or b " << (a || b) << endl;
cout << "logical not a " << (!a) << endl;

/*relational operators - <, >, ==, !=, <=, >= */
cout << "a less than or equal to b " << (a <= b) << endl;
cout << "a greater than or equal to b " << (a >= b) << endl;
cout << "a equal to b " << (a == b) << endl;
cout << "a not equal to b " << (a != b) << endl;
cout << "a less than b " << (a < b) << endl;
cout << "a greater than b " << (a > b) << endl;

/*Bitwise Operators - &, |, ^, ~, <<, >> */
cout << "a bitwise and b " << (a & b) << endl;
cout << "a bitwise or(inclusive or) b " << (a | b) << endl;
cout << "a bitwise XOR(exclusive or) b " << (a ^ b) << endl;
cout << "negotiation c " << (~c) << endl;
cout << "left shift a by two positions " << (c << 2) << endl;
cout << "right shift b by one position " << (c >> 1) << endl;

/*Pointer Operator - dereference operator (*)
 & - (reference operator) */
int an = 10;
int* ptr = &an;
*ptr = 20;
cout << "value of an is changed to 20 using dereference operator " << an << endl;
an = a + *ptr -b;
cout << "arithmetic calculation using pointer: a + *ptr -b = " << an << endl;

/*Assignment - =, +=, -=, *=, %=, /=, &=, >>=, <<=, ^=, |=
 basic, compound, chained, embedded assignment expressions*/
d = b;
cout << "b value assigned to d " << d << endl; // basic assignment expr
c = d = 20;
cout << "c and d assigned to 20 " << c << d << endl; // chained assignment expr
c += 1; // -> c = c + 1 compound assignment expr
cout << "5 is added to c " << c << endl;
c *= 5;
cout << "5 is multiplied to c " << c << endl;

/*Precedence operators(Increment/Decrement) - ++, -- */
cout << "postfix increment " << c++ << endl;
cout << "postfix decrement " << c-- << endl;
cout << "prefix increment " << ++c << endl;
cout << "prefix decrement " << --c << endl;

cout<<"type casting of (int)(53.22 + 9) : "<<(int)(53.22 + 9)<<endl;
cout<<"comma operator: "<<(a + b , a * b)<<endl;
int result = a > b? a : b;
cout<<"Ternary operator to find out which among a and b is greater: "<<result<<endl;

return 0;
}





