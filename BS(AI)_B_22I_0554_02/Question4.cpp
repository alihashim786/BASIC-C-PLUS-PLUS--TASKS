#include <iostream>
using namespace std;
int main() {
string ans; 
cout<<"This program is to identify the four sided (Quadrilateral) figure. Let\'s begin... \n\n"; 

cout<<"Are all four sides equal? (Y OR N)\n";
cin>>ans;


if((ans=="Y")||(ans=="y")) {
cout<<"Are all angles are of 90 degree? (Y or N)\n";
cin>>ans;
	if ((ans=="Y")||(ans=="y"))
	{
	cout<<"I got it! it\'s a SQUARE\n"; 
	}
	else if ((ans=="N")||(ans=="n"))
	{
	cout<<"I got it! it\'s a RHOMBUS\n";
	}
	else 
	{
	 cout<<"You have entered an Invalid input. MAke sure to type only \"y or n\"\n";
	}  
}
else if ((ans=="N")||(ans=="n")) 
{
cout<<"Are any two sides equal? (Y or N)\n";
cin>>ans;
	if ((ans=="Y")||(ans=="y"))
	{
	cout<<"Are two oppsoites sides equal? (Y or N)\n";
	cin>>ans;
		if ((ans=="Y")||(ans=="y")) 
	        {
	        
	        cout<<"Are equal opposite sides are parallel? (Y or N)\n";
	        cin>>ans;
	        if  ((ans=="N")||(ans=="n"))
	        {
	        cout<<"I got it! it\'s a ISOSCELES TRAPEZIUM\n";
	        }
	        else if ((ans=="Y")||(ans=="y"))
	        {
	       
	        cout<<"Are all angles of 90 degree? (Y or N)\n";
		cin>>ans;
			if ((ans=="Y")||(ans=="y")) 
			{
			cout<<"I got it! it\'s a RECTANGLE\n";
			}
			else if ((ans=="N")||(ans=="n"))
			{
			cout<<"I got it! it\'s a PARALELLOGRAM\n";
			}
			else
			{
			cout<<"You have entered an Invalid input. MAke sure to type only \"y or n\"\n";
			} 
			            
                }
			                 
                else 
		{
		cout<<"You have entered an Invalid input. MAke sure to type only \"y or n\"\n";
		}             
                }
		else if ((ans=="N")||(ans=="n")) 
		{
		cout<<"Are two adjecent sides equal? (Y or N)\n";
		cin>>ans;
			if ((ans=="Y")||(ans=="y") )
			{
			cout<<"Are the bisecting angles equal? (Y or N)\n";
			cin>>ans;
			if ((ans=="Y")||(ans=="y")) 
			{
			cout<<"I got it! it\'s a KITE\n";
			}
			else 
			{
		        cout<<"According to the above inputs the shape is not amongst the QUADRILATERAL\n\nThankyou :)\n";
		        }
		        }	
                } 
                else 
		{
		cout<<"You have entered an Invalid input. MAke sure to type only \"y or n\"\n";
		} 
                } 
         else if ((ans=="N")||(ans=="n")) 
                {
                cout<<"Are two oppsoite sides are parallel and two are non parallel? (Y or N)\n";
                cin>>ans;
                if ((ans=="Y")||(ans=="y")) 
                {
                cout<<"I got it! it\'s a TRAPEZIUM\n";
                }
                else if ((ans=="N")||(ans=="n"))
                {
                cout<<"According to the above inputs the shape is not amongst the QUADRILATERAL\n\nThankyou :)\n";
                }
                }
        else 
	{
	cout<<"You have entered an Invalid input. MAke sure to type only \"y or n\"\n";
	}  
                
} 
else 
{
 cout<<"You have entered an Invalid input. MAke sure to type only \"y or n\"\n";
}            



return 0;
}
