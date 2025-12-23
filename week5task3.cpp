#include<iostream>
using namespace std;
int main()
{
	int salary,exp;
	cout<<"Enter salary:"<<endl;
	cin>>salary;
	cout<<"Enter years of experience:"<<endl;
	cin>>exp;
	if(salary>=25000)
	cout<<"Eligible for loan"<<endl;
	else if(exp>5&&salary>=20000)
	cout<<"Eligible for loan"<<endl;
	else
	cout<<"Not eligible"<<endl;
	return 0;
	
	
	
}