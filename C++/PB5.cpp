/*
Let's Play PIG!

* See how many turns it takes you to get to 20.
* Turn ends when you hold or roll a 1.
* If you roll a 1, you lose all points for the turn.
* If you hold, you save all points for the turn.

TURN 1
Roll or hold? (r/h): r
Die: 4
Roll or hold? (r/h): r
Die: 6
Roll or hold? (r/h): r
Die: 2
Roll or hold? (r/h): r
Die: 3
Roll or hold? (r/h): r
Die: 5
Roll or hold? (r/h): r
Die: 4
Roll or hold? (r/h): r
Die: 1
Turn over. No score.

TURN 3
Roll or hold? (r/h): r
Die: 2
Roll or hold? (r/h): h
Score for turn: 2
Total score: 18

TURN 4
Roll or hold? (r/h): r
Die: 4
Roll or hold? (r/h): h
Score for turn: 4
Total score: 22

You finished in 4 turns!

Game over!
*/
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int total =0 ;
	int score = 0;
	cout<<"Welcome to the Two Dice Pig Game. You are Player1!\n";
	cout<<"\nTURN "<<i;
	while(score<20){
		int i = 1;
		char dec;
		cout<<"Roll or hold?(r/h)\n";
		cin>>dec;
		if(dec == 'r'){
			srand((unsigned) time(0));     
            int dice = (rand() % 6) + 1; 
            cout<<"Die: \n"<<dice;
            if(dice == 1){
            	total = 0;
            	dice =0;
            	cout<<"Turn Over, No Score\n";
            	i=i+1;
            	cout<<"TURN\n",i;
            	total = total + dice;	
			}
		score = total;
			  
	}else if(dec=='h'){
		cout<<"Score for turn:\n"<<score;
		i=i+1;
		cout<<"\nTURN "<<i;
	}
	
   }
   cout<<"You Finished in "<<i<<" turns!\n";
   cout<<"Game Over";
}
