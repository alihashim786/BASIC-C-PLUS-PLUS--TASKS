#include <iostream>
using namespace std;
int main() {
int num;


cout<<"This program is to check whether the number is even or odd\n\n";
	
	cout<<"Enter the number\n";
	cin>>num;
	
	cout<<((num&1)?"Entered number is odd\n":"Entered number is even\n"); 

return 0;
}
