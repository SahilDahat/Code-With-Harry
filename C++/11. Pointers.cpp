#include <iostream>
using namespace std;

int main(){
	//Pointer is a datatype which holds the address of other data types.
	
	int a = 3;
	int*b =&a;
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The address of a is "<<b<<endl;
	//& is the address operator
	//* is the dereference operator
	cout<<"The address of a is "<<*b<<endl;
	
	//pointer to pointer
	int**c = &b;
	cout<<"the address of b is "<<&b<<endl;
	cout<<"the address of b is "<<c<<endl;
	cout<<"the value of address c is"<<*c<<endl;
	cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;
	
	return 0;
}
