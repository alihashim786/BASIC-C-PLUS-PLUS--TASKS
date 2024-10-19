#include <iostream>
using namespace std;
int main() {
int wheels,setofwheels,carbodies,people,pairofpeople;
cout<<"How many number of wheels available right now?\n";
cin>>wheels;
setofwheels=(wheels/4);
cout<<"How many number of car bodies available right now?\n";
cin>>carbodies;
cout<<"How many number of figures of people available right now?\n";
cin>>people;
pairofpeople=(people/2);
switch (((setofwheels<=carbodies)&&(setofwheels<=pairofpeople))&&(setofwheels>=0))
{
case 1: 
cout<<"The number of toy cars you can make right now are :  "<<setofwheels<<"\n\n";
break;
	        case 0:
		switch (((carbodies<=setofwheels)&&(carbodies<=pairofpeople))&&(carbodies>=0))
		{
		case 1: 
		cout<<"The number of toy cars you can make right now are :  "<<carbodies<<"\n\n";
		break;
			case 0:
			switch (((pairofpeople<=setofwheels)&&(pairofpeople<=carbodies))&&(pairofpeople>=0)) 
			{
			case 1:
			cout<<"The number of toy cars you can make right now are :  "<<pairofpeople<<"\n\n";
			break;
		                      default:
		                      cout<<"\nThe given number of parts available cannot lineup to make toycar. Make sure to recheck inputs qand try again\n\nThankyou! :)\n\n";
		                      break;
		         }            
		} 
}

return 0;
}
