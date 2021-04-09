'''
Let's Play PIG!

* See how many turns it takes you to get to score 20.
* Turn ends when you hold or roll a 1.
* If you roll a 1, you lose all points for the turn.
* If you hold, you save all points for the turn.
(EXAMPLE)
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
'''

import random
total=0
Score=0
print("Welcome to the Two Dice Pig Game. You are Player 1!")
print("\nTURN ",i) 
while(Score<20):
    i=1   
    dec=input("Roll or hold?(r/h)")
    if dec=='r':
        dice = random.randint(1,6)
        print("Die:",dice)
        if (dice==1):
            total=0
            dice=0
            print("Turn Over, No Score")
            i=i+1
            print("\nTURN ",i)
            total=total+dice
        Score=total
    elif dec=='h':
        print("Score for turn:",Score)
        i=i+1
        print("\nTURN ",i)
print("You Finished in",i,"turns!")
print("Game Over")