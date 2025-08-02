# Number-Guessing
C++ Number Guessing Game
This is a simple command-line number guessing game written in C++. The program generates a random number within a user-defined range, and the player has a limited number of guesses to find the correct number.

Features
Customizable Range: The player can set the minimum and maximum values for the random number.

Limited Guesses: The player can define the total number of guesses they get per round.

Hints: The game provides hints after each incorrect guess, telling the player if the target number is higher or lower than their guess.

Continuous Play: The game allows the player to play multiple rounds without having to restart the program.

How to Compile and Run
Save: Save the code in a file named number_guessing.cpp.

Compile: Use a C++ compiler like g++ to compile the code. Open a terminal and run the following command:

g++ number_guessing.cpp -o guessing_game -std=c++11

-o guessing_game: Specifies the output executable file name.

-std=c++11: Ensures the compiler uses the C++11 standard or later.

Run: Execute the compiled program from your terminal:

./guessing_game

How to Play
When the game starts, you will be asked to enter the maximum number of guesses you want for the round.

Next, you will enter the minimum and maximum values to define the range for the secret number.

The game will then prompt you for your guesses. Enter a number and press Enter.

The game will tell you if your guess was too high or too low and inform you how many guesses you have left.

The game ends when you either guess the correct number or run out of guesses.

You will then be asked if you want to play again.

Example Session
Enter the maximum no. of guesses you want:5
Enter the maximum and minimum range you want:1 10
Enter your guess:5
The number is higher than 5
You have 4 chances left 
Enter your guess:8
The number is lower than 8
You have 3 chances left 
Enter your guess:6
CORRECT ANSWER!!!You won
Do you wish to continue?(y/n):n
Thank You for playing :)
