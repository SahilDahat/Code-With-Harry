#include<iostream>
using namespace std;

/*int product(int a, int b){
	return a*b ;
}
*/

/*
inline int product(int a, int b){
	 // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
	//return a*b+c ;
	return a*b;
}
*/

/*
Inline functions are used to reduce the function call.
When one function is being called multiple times in the program it increases the execution time,
so inline function is used to reduce time and increase program efficiency.
If the inline function is being used when the function is called,
the inline function expands the whole function code at the point of a function call,
instead of running the function.
Inline functions are considered to be used when the function is small otherwise it will not perform well.
Inline is not recommended when static variables are being used in the function.
*/

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}
// int strlen(const char *p){

int main(){
//int a,b;
int money;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
cout<<"Amount for which tax is to be calculated"<<endl;
cin>>money;
//If-else is not working....   (-_-)
if(money<500000){
cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;}
else(money>500000);{
cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";}
    
return 0;    
}

