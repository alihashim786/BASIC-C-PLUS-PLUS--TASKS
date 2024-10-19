
#include <iostream>
using namespace std;
int main() {
char x;
int year,y;


cout<<"THIS PROGRAM IS FOR CHECKING\n\n* Leap year (for this type 1)\n\n* Lower or Upper case alphabet, Integers or Special symbol (for this type 2)\n\n";
cin>>y;

	if(y==1) {
	cout<<"\nEnter year\n\n";
	cin>>year;
	cout<<((((year%4==0)&&(year%100!=0))||(year%400==0))?"\nYes this is a leap year\n":"\nNo this is not a leap year\n");
	}



	else {
	cout<<"\nEnter your desired ones\n";
	cin>>x;
	cout<<((((x>='a')&&(x<='z'))||((x>='A')&&(x<='Z')))?(((x>='a')&&(x<='z'))?"This is a Lower case alphabet\n":"This is a Upper case alphabet\n"):((((x>='!')&&(x<='/')||((x>=':')&&(x<='@')))?"This is a Special symbol\n":"This is an Integer\n")));
	}


return 0;
}
