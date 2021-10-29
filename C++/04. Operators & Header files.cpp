#include<iostream>
using namespace std;

/* Header Files : these are of two types :
1. system header files: it comes with the compiler 
2. user defined header files : as the name suggests

#include"this.h" --> it will produce an error if this.h is not present in the current directory.
*/

int main(){
    int a = 4 , b = 5;
    cout<<"Operators in c++"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    
    cout<<endl;
    
    cout<<"1. Arithmetic Operators"<<endl;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    cout<<"2. Assignment Operators "<<endl;
    //Assignment Operators --> used to assign values to variables.
    
    cout<<endl;
    
    cout<<"3. Comparision Operators"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;;
    cout<<"The value of a !=b is "<<(a!=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    
    cout<<endl;
    
    //Logical Operators
    cout<<"4. Following are the Logical operators in c++"<<endl;
    cout<<"The value of ((a==b) && (a<b)) Logical AND operator is "<<((a==b) && (a<b))<<endl;
    //Logical AND Operator
    // both needs to be true for the answer to be true. 

    cout<<"The value of ((a==b) || (a<b)) Logical OR operator is "<<((a==b) || (a<b))<<endl;
    //Logical OR Operator

    cout<<"The value of (!(a==b)) Logical NOT operator is "<<(!(a==b))<<endl;
    //Logical NOT Operators
    
    return 0;
}
