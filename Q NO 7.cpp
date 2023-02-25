#include<iostream>
using namespace std;
char letter;
main(){
	cout << "ENTER SINGLE LETTER 'M' FOR MALE AND 'F' FOR FEMALE"<<endl;
	cin >> letter;
	if(letter=='M'||letter=='m'){
		cout << "YOU ARE MALE";
	}
	else if(letter=='f'||letter=='F'){
		cout << "YOU ARE FEMALE";
	}
	else{
		cout << "INVALID CHARACTER";
	}
		
	}
