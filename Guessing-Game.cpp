//Guess the Number Game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	//Declaring variables and taking inputs
	int guesses=1,difficulty,num,randomNum;
	cout<<"Let's play guess the number. Enter the difficulty level 1,2 or 3 ";
	cin>>difficulty;
	
	//Generating random number
	srand(time(0));
	if (difficulty==1)
	{
		randomNum= rand()%11;
	}
	else if(difficulty==2)
	{
		randomNum= rand()%101;
	}
	else
	randomNum= rand()%1001;
	
	//Playing the game until number is correctly guessed
	cout<<"Enter a number ";
	cin>>num;
	while (num!=randomNum)
	{
		guesses++;
			if(randomNum>num)
			cout<<"Too low!";
			else
			cout<<"Too high!";
			cout<<"\nEnter another number ";
			cin>>num;
	}
	cout<<"It took you "<<guesses<<" guesses to guess the number"<<endl;
	
	//Outputing statements based on guesses took
	switch(guesses)
	{
		case 1:
			cout<<"You're a mind reader";
			break;
			
		case 2 ... 4:
			cout<<"Most impressive";
			break;
			
		case 5 ... 6:
			cout<<"You can do better than that";
			break;
			
		default:
			cout<<"Better luck next time";
	}
}

/*Test cases:
1) 1 as difficulty and 2 tries taken to guess number
output gives it took you 2 tries and most impressive
2) 3 as difficulty and 10 tries taken to guess number
output gives it took you 10 tries and better luck next time
*/
