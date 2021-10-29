#include<iostream>
using namespace std;

inline int sum(int a, int b){
	cout<<"Using function with 2 Arguments"<<endl;
	return a+b;
}

inline int sum(int a, int b, int c){
	cout<<"Using function with 3 Arguments"<<endl;
	return a+b+c;
}

int main(){
	cout<<"Sum of 3 qnd 6 is"<<sum(3,6)<<endl;
	cout<<"Sum of 3,7 and 6 is"<<sum(3,7,6)<<endl;
	return 0;
}
