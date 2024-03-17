/* MUHAMMAD HAYYAN
23I-2041__CY-A
Assignment#03___Q7b*/

#include<iostream>
using namespace std;

int main()
{	
	//Program 2 to swap values without using third variable (using basic plus minus)
	
	int num1, num2;
	
	cout<< "      ------- Program 2 to swap values -------";
	
	cout<< "\nEnter first number \"A\": ";
	cin>> num1;
	
	cout<< "\nEnter second number \"B\": ";
	cin>> num2;
	
	num1 = num1 + num2;
	num2 = num1 - num2;		//swapping values using basic arithmetic operators
	num1 = num1 - num2;
	
	cout<<"\n\nValue of A after swapping = "<<num1;
	cout<<"\n\nValue of B after swapping = "<<num2;
	
	return 0;
}
