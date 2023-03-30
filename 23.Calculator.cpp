#include<iostream>
using namespace std;

int sum(int a, int b){
	int c=a+b;
	return c;
}

int sub(int a, int b){
	int c=a-b;
	return c;
}

int multiple(int a, int b){
	int c=a*b;
	return c;
}

float divide(float a, float b){
	float c=a/b;
	return c;
}
int main(){
	cout<<"This is a calcultor\n";
	char operation;
	int num1, num2;
	cout<<"Enter First Number= ";
	cin>>num1;
	cout<<"Enter Second Number= ";
	cin>>num2;
	cout<<"+ = Addition\t - = Subtracction\t * = Multiplication \t / = Division \n";
	cout<<"Select one of the above......"; 
	cin>>operation;
	
	switch(operation){
		case '+':
			cout<<"Add= "<<sum(num1, num2);
			break;
		case '-':
			cout<<"Subtracte= "<<sub(num1, num2);
			break;
		case '*':
			cout<<"Multiple= "<<multiple(num1, num2);
			break;
		case '/':
			cout<<"Divide= "<<divide(num1, num2);
			break;
		default:
			cout<<"Invilid operation";
	}
	return 0;
}
