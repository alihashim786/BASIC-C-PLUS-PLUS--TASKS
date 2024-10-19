#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
int w=1;
int guess;
cout<<"Hey buddy! Welcome to hi-lo game. You have five tries to guess a number. Let\'s begin\n\n";
srand(time(0));
int i=1+(rand()%100);

menu:
cout<<"\nGuess a number\n";
cin>>guess;

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
else if (guess==i)
{
cout<<"Congratulations! You have guessed a write number. Let\'s play again :)\n\n";
}

if(w<5)
{
if(guess!=i){
w=w+1;
goto menu;
}
}

return 0;
}
