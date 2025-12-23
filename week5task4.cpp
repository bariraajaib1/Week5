#include<iostream>
using namespace std;
int main()
{
	int X;
	cout<<"Enter the value of X";
	cin>> X;
	cout<<"The number"<< X <<"is"<<((X %2==0)?"Even" : "Odd");
	return 0;
	
}

