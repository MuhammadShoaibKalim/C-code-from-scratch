// Write a C++ program that takes two integer inputs from users and displays the result after subtracting first number from second number.
#include<iostream>
using namespace std;
int main(){
	int num1, num2, sub; 
	cout<<"Enter the value of num1 and  num2 :"<<endl;
	cin>>num1>>num2; //15 25
	
	sub=num2-num1;
	cout<<"After the subtraction the result is :"<<sub; //10
	
	return 0;
	
	
}
