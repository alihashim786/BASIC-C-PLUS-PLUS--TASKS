#include <iostream>
using namespace std;
int main() {
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,w,x,y,Sum,Average;

cout<<"This program is to caluclate averageof two numbers. Let\'s begin...\n\n";


cout<<"Enter your first number\n";
cin>>x;
cout<<"Enter your Second number\n";
cin>>y;
	a=(x^y);                          //cout<<(((a^b)^((a&b)<<=1))>>1);
	b=(x&y);
	c=(b<<1);
		d=(a^c);
		e=(a&c);     
		f=(e<<1);
			g=(d^f);
			h=(d&f);     
			i=(h<<1);
				j=(g^i);
				k=(g&i);     
				l=(k<<1);
					m=(j^l);
					n=(j&l);     
					o=(n<<1);
						p=(m^o);
						q=(m&o);     
						r=(q<<1);
							s=(p^r);
							t=(p&r);     
							u=(t<<1);
							
							
Sum=(s^u);
Average=(Sum>>1);

cout<<"The average of the above given numbers is :  "<<Average<<"\n\n";												

return 0;
}
