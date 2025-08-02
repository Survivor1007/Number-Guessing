#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>

class NumberGuessing
{
      private:
            int maxGuess;
            int maxValue;
            int minValue;
            int number;
            int guesses;
            char cont;

      public:
            NumberGuessing()
            {
                  cont = 'y';
                  guesses = 0;
            }
            
            
            void run()
            {
                  while(cont == 'y' || cont == 'Y')
                  {
                        generateNumber();/*Generate the random number and initializa the guesses to 0*/

                        guessNumber();/*Main function where main guessing occurs*/

                        askToContinue();/*Asks the player if they want to continue*/
                  }
                  std::cout<<"Thank You for playing :)"<<std::endl;
            }
      private:
            void generateNumber()
            {
                  std::cout<<"Enter the maximum no. of guesses you want:";
                  std::cin>> maxGuess;
                  std::cout<<"Enter the maximum and minimum range you want:";
                  std::cin >> maxValue>> minValue;
                  srand(time(0));
                  guesses = 0;
                  number = rand() % (maxValue - minValue + 1) + minValue;

            }
            void guessNumber()
            {
                  int answer;
                  while( guesses < maxGuess || number == answer)
                  {
                        std::cout<<"Enter your guess:";
                        std::cin >> answer;

                        if ( answer == number)
                        {
                              std::cout<< "CORRECT ANSWER!!!You won"<<std::endl;
                              break;
                        }
                        else
                        {
                              guesses++;
                              if( number < answer)
                                    std::cout<<"The number is lower than "<< answer<<std::endl;
                              else
                                    std::cout<<"The number is higher than "<< answer<<std::endl;
                              std::cout<< "You have "<<(maxGuess - guesses)<<" chances left "<<std::endl;
                        }
                              
                  }
                  if ( guesses == maxGuess)
                        std::cout<<"You Lost :("<<std::endl<<"The answer was:"<<number<<std::endl;
            }
            void askToContinue()
            {
                  std::cout<<"Do you wish to continue?(y/n):";
                  std::cin>> cont;
            }
};
int main()
{      
      NumberGuessing num;
      num.run();
      return 0;
}
