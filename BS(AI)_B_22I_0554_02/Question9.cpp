
#include <iostream>
using namespace std;
int main() {
string y;
int  a,b,c,d;
cout<<"TO CHECK LARGEST NUMBER AMONG\n\n* Three numbers (enter a)\n* Four numbers (enter b)\n* To exit program (enter e)\n";
cin>>y;
	if (y=="a") {
	cout<<"\nEnter first number\n";
	cin>>a;
	cout<<"Enter second number\n";
	cin>>b;
	cout<<"Enter third number\n";
	cin>>c;
	cout<<(((a>=b)&&(a>=c))?a:(((b>=a)&&(b>=c))?b:c))<<" is the largest number\n";      //using ternary operators
	}
		else if (y=="b") {
		cout<<"Enter first number\n";
		cin>>a;
		cout<<"Enter second number\n";
		cin>>b;
		cout<<"Enter third number\n";
		cin>>c;
		cout<<"Enter fourth number\n";
		cin>>d;
		cout<<(((a>=b)&&(a>=c)&&(a>=d))?a:(((b>=a)&&(b>=c)&&(b>=d))?b:(((c>=a)&&(c>=b)&&(c>=d)))?c:d))<<" is the largest number\n";          //using ternary operators
		}
				else {
				cout<<"Thankyou! See you soon.\n";
				}

return 0;
}
