#include<iostream>
using namespace std;
char city='K'||'S'||'G'||'H';
	char gender='F'||'M';
	int age;
	string name;
	float salary;
	int bonus;
	float netSalary;
main(){
	
	
	cout << "ENTER YOUR NAME"<<endl;
	cin >> name;
	cout << "ENTER YOUR AGE"<<endl;
	cin >> age;
	cout << "ENTE R YOUR SALARY"<<endl;
	cin >> salary;
	cout << "YOUR GENDER"<<endl;
	cin >> gender;
	cout << "ENTER YOUR CITY"<<endl;
	cin >> city;
	
	if(gender=='F'&&age >=25 && age <=35 && city == 'K'||'H'){
		bonus=2000;
		netSalary=bonus+salary;
		cout << "YOUR NET SALARY IS :"<<netSalary;
		 
	}
		else if(gender=='M'&&age >=25 && age <=40 && city == 'G'||'S'){
		bonus=2500;
		netSalary=bonus+salary;
		cout << "YOUR NET SALARY IS :"<<netSalary;
	}
	else{
		cout << "NET SALARY"<<netSalary;
	}
}
