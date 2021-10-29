#include<iostream>
using namespace std;

//type 1
//struture are used to combine different types of data types
//employee's details

/*
struct employee{
	char name;
	int eId;
	float salary;
	*/

/*	
typedef struct employee
{
	char name;
	int eId;
	float salary;
}dumb;
*/

union Money{
	int Dollar;
	char Pound;
	float Rupees;
};

int main(){
	// type 1
	/*
	struct employee harry;
	harry.name = 'H';
	harry.eId = 20113054;
	harry.salary = 50000;
	
	cout<<harry.name<<endl;
	cout<<harry.eId<<endl;
	cout<<harry.salary<<endl;
	*/
	
	
	/*
	dumb harry;
	harry.name = 'H';
	harry.eId = 20113054;
	harry.salary = 50000;
	
	cout<<"Harry's initial is "<<harry.name<<endl;
	cout<<"The employee's ID is "<<harry.eId<<endl;
	cout<<"Harry's salary is "<<harry.salary<<endl;
	*/
	
	/*
	union Money paisa;
	paisa.Dollar = 75;
	paisa.Pound = 'P';
	//here only one value can be used as the space is limited so overwriting occurs which cause the previous value to be deleted.
	//cout<<paisa.Dollar<<endl;
	//using the above command when Pound value is also declared will give garbage value as result.
	cout<<paisa.Pound<<endl;
	*/
	
	enum {breakfast , lunch , dinner };
	cout<<breakfast<<" breakfast"<<endl;
	cout<<lunch<<" lunch"<<endl;
	cout<<dinner<<" dinner"<<endl;
	return 0;
}
