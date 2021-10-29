#include <iostream>
using namespace std;

//write the table of 6 using loops only
int main(){
	/*int i;
	for (i=0; i%6==0 ; i++)
	{
		cout<<i<<endl;
		i++;
	}*/
	
	int n = 6;
	cout<<"multiples of 6 is "<<endl;
	int i=1;
	do{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
		i++;
	}while(i<=10);
	
	return 0;
}
