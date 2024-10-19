#include <iostream>
using namespace std;
int main() {
char a,b,c,d,e,f;
int num=0, capital=0, small=0;
cout<<"Password Requirements :\na. The password should be at least six characters long.\nb. The password should contain at least one uppercase and at least one lower case letter.\nc. The password should have at least one digit.\n\n";
cout<<"Enter Password\n";
cin>>a>>b>>c>>d>>e>>f;s
if ((a>0)&&(b>0)&&(c>0)&&(d>0)&&(e>0)&&(f>0));
{
if ((a>='0')&&(a<='9'))
{
num++;
}
else if  ((a>='a')&&(a<='z'))
{
small++;
}
else if ((a>='A')&&(a<='Z'))
{
capital++;
}
	if ((b>='0')&&(b<='9'))
	{
	num++;
	}
	else if  ((b>='a')&&(b<='z'))
	{
	small++;
	}
	else if ((b>='A')&&(b<='Z'))
	{
	capital++;
	}
		if ((c>='0')&&(c<='9'))
		{
		num++;
		}
		else if  ((c>='a')&&(c<='z'))
		{
		small++;
		}
		else if ((c>='A')&&(c<='Z'))
		{
		capital++;
		}
			if ((d>='0')&&(d<='9'))
			{
			num++;
			}
			else if  ((d>='a')&&(d<='z'))
			{
			small++;
			}
			else if ((d>='A')&&(d<='Z'))
			{
			capital++;
			}
				if ((e>='0')&&(e<='9'))
				{
				num++;
				}
				else if  ((e>='a')&&(e<='z'))
				{
				small++;
				}
				else if ((e>='A')&&(e<='Z'))
				{
				capital++;
				}

					if ((f>='0')&&(f<='9'))
					{
					num++;
					}
					else if  ((f>='a')&&(f<='z'))
					{
					small++;
					}
					else if ((f>='A')&&(f<='Z'))
					{
					capital++;
					}
}
if ((num>=1)&&(small>=1)&&(capital>=1))	
{
cout<<"At least six characters.   ✓\nAt least one uppercase.    ✓\nAt least one lowercase.    ✓\nAt least one digit.        ✓\nYour Password is created succesfully\n\n";
}
else
{
cout<<"Your password doesn't meet the requirements\nTry again\n\n";	
}	
					
					
return 0;
}
