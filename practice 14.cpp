#include<iostream>
using namespace std;

int main(){
	
	
	char choice;
	int num1, num2;
	
	cout<<" CALCULATOR";
	cout<<"\n_______________________";
	cout<<"\nEnter + for Addition";
	cout<<"\nEnter - for Substraction";
	cout<<"\nEnter / for Division";
	cout<<"\nEnter * for Multiplication";
	cout<<"\n_______________________";
	cout<<"\nSelect an operator:";
	cin>>choice;
	
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	
	if(choice == '1' )
	cout<<num1 + num2;
	
	else if (choice=='2'){
	cout<<num1 / num2;
}
	else if (choice== '3'){
	cout<<num1 /num2;
}
	else if(choice=='4'){
	cout<<num1 * num2;
}
	
else{
	
	cout<<"Invalid output;";
}
	
		
	
		
}