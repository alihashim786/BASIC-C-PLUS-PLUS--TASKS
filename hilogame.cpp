#include<iostream>
using namespace std;
int main() {
int t=1;
int guess;
cout<<"Hey buddy! Welcome to hi-lo game. You have five tries to guess a number. Let\'s begin\n\n";
srand(time(0));
int i=1+(rand()%100);
cout<<i<<endl;
cout<<"Enter your guess\n";
cin>>guess;
while((guess!=i)&&(t<5))
{
if((guess<1)||(guess>100)) 
{
cout<<"Your guess is out of bound. PLease enter the guess between 1 and 100.\n";
}
else if (guess>i) 
{
cout<<"your guess is too high\n";
}
else if(guess<i) 
{
cout<<"your guess is too low\n";
}
cout<<"\nEnter guess again\n";
cin>>guess;
t++;
}
if(t<5)
{
cout<<"Congrats!! correct guess\n";
}
else 
{
cout<<"\nyou are out of guesses, try again\n";
}


return 0;
}
