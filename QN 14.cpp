#include<iostream>
using namespace std;
int billcalculate(int totalread);
int takeread()
{
	float currRead;
	float preRead;
	float totRead;
	float reduction;
	float finalBill;
	cout << "ENTER YOUR CURRENT READING"<<endl;
	cin >> currRead;
	cout << "ENTER YOUR PREVIOUS READING"<<endl;
	cin >> preRead;
	totRead= currRead - preRead;
	billcalculate(totRead);
}


int billcalculate(int totalread)
{
	int reduction,finalbill;
	if(totalread<=300){
		totalread =totalread*4;
		cout << "YOUR TOTAL BILL is :"<<totalread<<endl;
		reduction=totalread * 0.3;
		finalbill=totalread - reduction;
		cout <<"AFTER REDUCTION OF 3 PERCENT YOUR BILL IS :"<<finalbill; 
		
	}
	else if(totalread>=301 && totalread<=400){
		totalread =totalread*6;
		cout << "YOUR TOTAL BILL is :"<<totalread<<endl;
		
	}
	else if(totalread>=401)
	{
		totalread =totalread*7;
		cout << "YOUR TOTAL BILL is :"<<totalread<<endl;
		reduction=totalread * 0.4;
		finalbill=totalread + reduction;
		cout <<"AFTER REDUCTION OF 3 PERCENT YOUR BILL IS :"<<finalbill; 	
	}

}


main(){
	
	takeread();	
}
