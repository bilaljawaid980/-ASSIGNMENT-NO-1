#include<iostream>
#include<math.h>
using namespace std;
int num;int cal;string name;
main(){
	cout <<"\t" <<"\t"<< "\t"<< "\t"<< "\t"<< "\t"<< "\t"<<"CALCULATOR"<<endl <<endl<<endl;
	cout << "ENTER NUMBER FROM 1 TO 4 TO PERFORM FOLLOWING FUNCTION"<<endl << endl;
	cout << "1 TO CALCULATE SQUARE ROOT"<<endl<<endl;
	cout <<"2 FOR CUBE ROOT"<<endl<<endl;
	cout << "3 TO PRINT 50 TIME"<<endl<<endl;
	cout <<"4 TO PRINT TABLE"<<endl<<endl;
	cin >> num;
	
	 cout << "YOUR NUMBER FOR CALCULATION"<<endl;
	 cin >> cal;
	 switch(num){
	 	case 1:{
	 		cout <<"SQUARE ROOT " << pow(cal,0.5); 
			break;
		 }
		 case 2:{
		 	cout << "CUBE ROOT "<< pow(cal,3);
			break;
		 }
		 case 3:{
		 	cin >> name;
		 	for(int i=1;i<=50;i++){
		 		
		 		cout <<"NAME :"<< name <<endl;
			 }
			break;
		 }
		 case 4:{
		 	for(int i=1;i<=10;i++){
			 
		 	cout << "TABLE OF NUMBER IS: "<<cal <<"*"<<i<<"="<<cal * i<<endl;
		 }
			break;
		 
	 }
	 default:{
	 	cout << "INVALID"<<endl;
		break;
	 }
}
}
