#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter marks (0-100) : ";
	cin>>marks;
	if (marks >= 90){
		cout<<"Grade: A+";
	}
	if(marks >= 80 && marks < 90){
		cout<< "Grade: A";
	}
	if(marks >=70 && marks < 80){
		cout<< "Grade: B";
	}
	if (marks>= 60 && marks < 70){
		cout<< "Grade: C";
	}
	if(marks< 60){
		cout<< "Grade: fail";
	}
	return 0;
	
}