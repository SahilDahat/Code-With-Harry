#include <iostream>
using namespace std;

int c = 45;
// Here c is global variable

int main()
{
    
    int a, b , c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"enter the value of b:"<<endl;
    cin>>b;

    //Here c is a local variable 
    c = a + b;
    cout<<"the sum is "<<c<<endl;
    cout<<"The Global Variable is "<<::c<<endl;
    //Here the :: is called Scope Resolution Operator

    //float d=34.4;
    //here the stored is in double form which can be checked by hovering the cursor over the number
    //long double e = 34.4;
    // here it is double only 

    float d = 34.4f;
    //now the value of d is a float
    //the f/F is not case sensitive

    long double e = 34.4l;
    // e is long double
    // l/L is not case sensitive 

    cout<<"size of 34.4 is"<< sizeof(34.4)<<endl;
    cout<<"size of 34.4f is"<< sizeof(34.4f)<<endl;
    cout<<"size of 34.4F is"<< sizeof(34.4F)<<endl;
    cout<<"size of 34.4l is"<< sizeof(34.4l)<<endl;
    cout<<"size of 34.4L is"<< sizeof(34.4L)<<endl;

//Reference variables
float x = 455;
float & y= x ;
//here y points to x only and the & function helps to refer the values. 
cout<<x<<endl;
cout<<y<<endl;



// TYPECASTING
int p = 45;
float q = 41.46;
cout<<"1. the value of p is "<<(float)p<<endl;
cout<<"2. the value of p is "<<float(p)<<endl;
//1 and 2 are same
cout<<"the value of q is "<<(int)q<<endl;
//cout<<"the value of q is "<<int(q)<<endl;

cout<<"the expression is "<<p + q<<endl;
cout<<"the expression is "<<p + int(q)<<endl;
cout<<"the expression is "<<p + (int)q<<endl;

    return 0;
}
