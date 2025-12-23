#include<iostream>
using namespace std;
int main()
{
	char grade;
	int years;
	double basic = 0, bonus = 0, gross = 0, tax = 0, netsalary = 0; 
	
	cout<<"enter employee grade (A, B, C):";
	cin>>grade;
	cout<<"enter years if service:";
	cin>>years;
	if (grade =='A' || grade =='a')
	basic = 50000;
	if (grade =='B'|| grade == 'b')
	basic = 30000;
	
	if (grade =='C' || grade == 'c')
	basic = 20000;
	if(years>=10)
	bonus = basic * 0.10;C
	if(years>= 5 && years < 10)
	bonus = basic * 0.05;
	if(years < 5)
	bonus = 0;
	gross = basic + bonus;
	if(gross > 40000)
	tax = gross * 0.20;
	if(gross >= 30000 && gross <=40000)
	tax = gross * 0.10;
	if(gross<30000)
	tax = 0;
	netsalary = gross- tax;
	cout<<"\nBasic salary :"<<basic;
	cout<<"\nBonus:"<<bonus;
	cout<<"\nGross salary :"<<gross;
	cout<<"\nTax :"<<tax;
	cout<<"\nNet salary :"<<netsalary;
	return 0;
}