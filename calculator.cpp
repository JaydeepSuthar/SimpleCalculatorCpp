#include <iostream>

using namespace std;

int main()
{
	int num1,num2;
	char op;
	cout<<"\nWelcome to the Basic Calculator Made By Jaydeep in C++"<<endl;
	cout<<"\nEnter the first number: ";
	cin>>num1;
	cout<<"\nEnter the second number: ";
	cin>>num2;	
	cout<<"\nEnter the Operator(+ - * / %): ";
	cin>>op;
	
	if (op == '+')
	{
		cout<<"Answer is = "<<num1+num2<<"\n";
	}
	else if (op == '-')
	{
		cout<<"Answer is = "<<num1-num2<<"\n";
	}
	else if (op == '*')
	{
		cout<<"Answer is = "<<num1*num2<<"\n";
	}
	else if (op == '/')
	{
		cout<<"Answer is = "<<num1/num2<<"\n";
	}
	else if (op == '%')
	{
		cout<<"Answer is = "<<num1%num2<<"\n";
	}
	else
	{
		cout<<"Please enter valid oparator\n";
	}
	system("pause");
	return 0;
}
