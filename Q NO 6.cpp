#include<iostream>
using namespace std;
int a,b,c;
main(){
	cout << "ENTER NUMBER 1"<<endl;
	cin >> a;
	cout << "ENTER NUMBER 2"<<endl;
	cin >> b;
	cout << "ENTER NUMBER 3"<<endl;
	cin >> c;
	if(a==b&&b==c&&c==a){
		cout << "ALL ARE EQUAL"<<endl;
		}
		else{
			cout << "INVALID NUMBERS";
		}
	}


