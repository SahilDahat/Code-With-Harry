#include <iostream>
using namespace std;

//Function Prototype
//The function prototype is the template of the function which tells the details of the function
//e.g(name, parameters) to the compiler.
//Function prototypes help us to define a function after the function call.
// type function-name (arguments);

int sum(int a, int b){
	int c = a+b;
//	void g();
	return c;
}

void g(){
	cout<<"\n Good Morning"<<endl;
}

int main(){
	int num1 , num2;
	cout<<"num1"<<endl;
	cin>>num1;
	cout<<"num2"<<endl;
	cin>>num2;
	cout<<"the sum is "<<sum(num1 , num2)<<endl;
	//return value function key
	cout<<"g fun."<<endl;
	// void func. calling
	g();
	
	return 0;
	
}
//Formal Parameters are those parameters which are The variables which are declared in the function.
//Active Parameters are those parameters which are passed through the functions.




