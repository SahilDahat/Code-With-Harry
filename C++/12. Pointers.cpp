#include <iostream>
using namespace std;

int main(){
	int i=0;	
	int marks[] = {78,80,98,96};
	//cout<<marks[0]<<endl;
	//cout<<marks[1]<<endl;
	//cout<<marks[2]<<endl;
	//cout<<marks[3]<<endl;
	
	//for(i = 0 ;i<4 ;i++)
	//{
	//	cout<<marks[i]<<endl;
	//}
	// do the same using while and do while loops
	
	//while(i<4)
	//{
	//	cout<<marks[i]<<endl;
	//	i++;
	//}
	
	//do
	//{
	//	cout<<marks[i]<<endl;
	//	i++;
	//}while(i<4);
	
	cout<<"Pointers and Arrays"<<endl;
	int* p = marks;
	//we have assigned the address of array “marks” to the pointer variable “*p” 
	//and then printed the pointer “*p”.
	// The main thing to note here is that the value at the pointer “*p” is the starting address of the array “marks”.
	/*
	cout<<"value of *p is "<<*p<<endl;
	cout<<"value of *(p+1) is "<<*(p+1)<<endl;
	cout<<"value of *(p+2) is "<<*(p+2)<<endl;
	cout<<"value of *(p+3) is "<<*(p+3)<<endl;
	
	*/
	
	cout<<*(p++)<<endl;
	
	cout<<*(++p);
	return 0;
}
