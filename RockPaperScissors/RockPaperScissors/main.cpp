#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>
#include <string>


int main() {



	int newGame = 0;
	int gameMode;
	std::string getPlayerChoice;
	std::string guess;
	int numOfwins = 0;
	int numOflose = 0;
	bool done = true;
	bool validMenu = false;
	bool playerValidation = false;
	srand(time(0));


	do {
		std::cout << "===============================" << std::endl << std::endl << std::endl;

		std::cout << "Welcome to Rock Paper Scissors" << std::endl;
		std::cout << "1. Endless" << std::endl;
		std::cout << "2. Best 2 out of 5" << std::endl;
		std::cout << "Which Gamemode would you like to play: ";
		std::cout << std::endl << std::endl << std::endl;

		std::cout << "===============================" << std::endl;

		std::cin >> gameMode;


		// std::cout << "Random num display " << bot << std::endl;

		switch (gameMode)
		{
		case 1:



			do {


				if (gameMode == 1) {
				
					int getBotChoice = (rand() % 3) + 1;  // rock = 1, paper = 2, scissors = 3   


					while (!playerValidation) {

						std::cout << "Pick Rock, paper, or Scissors" << std::endl;
						std::cin >> guess;


						if (getBotChoice == 1) {
							std::cout << "Bot Picked Rock" << std::endl;
						}
						else if (getBotChoice == 2) {
							std::cout << "Bot Picked Paper" << std::endl;
						}
						else {
							std::cout << "Bot Picked Scissors" << std::endl;
						}

						std::cout << "You picked " << guess << std::endl;


						// if rock is played


						if (guess == "rock" && getBotChoice == 1) {
							std::cout << "Tie" << std::endl << std::endl;
							playerValidation = true;


						}
						else if (guess == "rock" && getBotChoice == 2) {
							std::cout << "You lose" << std::endl << std::endl;
							numOflose++;
							playerValidation = true;

						}
						else if (guess == "rock" && getBotChoice == 3)
						{
							std::cout << "You win" << std::endl << std::endl;
							numOfwins++;
							playerValidation = true;

						}



						// if paper is played

						if (guess == "paper" && getBotChoice == 1) {
							std::cout << "You win" << std::endl << std::endl;
							numOfwins++;
							playerValidation = true;


						}
						else if (guess == "paper" && getBotChoice == 2) {
							std::cout << "Tie" << std::endl << std::endl;
							playerValidation = true;

						}
						else if (guess == "paper" && getBotChoice == 3) {
							std::cout << "You lose" << std::endl << std::endl;
							numOflose++;
							playerValidation = true;


						}


						// if scissor is played

						if (guess == "scissors" && getBotChoice == 1) {
							std::cout << "You Lose" << std::endl << std::endl;
							numOflose++;
							playerValidation = true;

						}
						else if (guess == "scissors" && getBotChoice == 2) {
							std::cout << "You win" << std::endl << std::endl;
							numOfwins++;
							playerValidation = true;

						}
						else if (guess == "scissors" && getBotChoice == 3) {
							std::cout << "Tie" << std::endl << std::endl;
							playerValidation = true;

						}

						if (playerValidation == false) {
							std::cout << "Invalid choice. Please enter rock, paper, or scissors" << std::endl;
						}

	
					}
					playerValidation = false;

					std::cout << "You won: " << numOfwins << std::endl;
					std::cout << "You loss: " << numOflose << std::endl;


					std::cout << "Keep playing (Y/N)" << std::endl;
					std::cin >> getPlayerChoice;

					


				}

			} while (getPlayerChoice == "y");


			std::cout << "Play a new Gamemode: (1 for yes, 2 for no) ";

			while (!validMenu) {

			std::cin >> newGame;

				if (newGame == 1) {
					break;
				}
				else if (newGame == 2) {
					return 0;
				}
				else if (std::cin.fail()) {
					std::cout << "Invalid choice. Please enter 1 or 2" << std::endl;
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}
			}
			
			break;
		case 2:
			numOfwins = 0;
			numOflose = 0;

			do {




				int getBotChoice = (rand() % 3) + 1;  // rock = 1, paper = 2, scissors = 3   


				while (!playerValidation) {

					std::cout << "Pick Rock, paper, or Scissors" << std::endl;
					std::cin >> guess;

					if (guess == "rock" && getBotChoice == 1) {
						std::cout << "Tie" << std::endl << std::endl;
						playerValidation = true;

					}
					else if (guess == "rock" && getBotChoice == 2) {
						std::cout << "You lose" << std::endl << std::endl;
						numOflose++;
						playerValidation = true;
					}
					else if (guess == "rock" && getBotChoice == 3)
					{
						std::cout << "You win" << std::endl << std::endl;
						numOfwins++;
						playerValidation = true;
					}


					// if paper is played

					if (guess == "paper" && getBotChoice == 1) {
						std::cout << "You win" << std::endl << std::endl;
						numOfwins++;
						playerValidation = true;

					}
					else if (guess == "paper" && getBotChoice == 2) {
						std::cout << "Tie" << std::endl << std::endl;

					}
					else if (guess == "paper" && getBotChoice == 3) {
						std::cout << "You lose" << std::endl << std::endl;
						numOflose++;
						playerValidation = true;

					}


					// if scissor is played

					if (guess == "scissors" && getBotChoice == 1) {
						std::cout << "You Lose" << std::endl << std::endl;
						numOflose++;
						playerValidation = true;


					}
					else if (guess == "scissors" && getBotChoice == 2) {
						std::cout << "You win" << std::endl << std::endl;
						numOfwins++;
						playerValidation = true;


					}
					else if (guess == "scissors" && getBotChoice == 3) {
						std::cout << "Tie" << std::endl << std::endl;
					}



					if (playerValidation == false) {
						std::cout << "Invalid choice. Please enter rock, paper, or scissors" << std::endl;
					}
				}
				playerValidation = false;

					if (getBotChoice == 1) {
						std::cout << "Bot Picked Rock" << std::endl;
					}
					else if (getBotChoice == 2) {
						std::cout << "Bot Picked Paper" << std::endl;
					}
					else {
						std::cout << "Bot Picked Scissors" << std::endl;
					}

					std::cout << "You picked " << guess << std::endl;


				

				std::cout << "Score: " << numOfwins << "/" << numOflose << std::endl;


				if (numOfwins >= 2) {
					std::cout << "Good Game" << std::endl;
					numOfwins++;

					std::cout << "Play a new Gamemode: (1 for yes, 2 for no) ";
					std::cin >> newGame;
					if (newGame == 2) {
						done = false;
					}
					else {
						numOfwins = 0;
					}

					if (newGame == 1) {
						numOfwins = 0;
						break;
					}
				
				}


				if (numOflose >= 2) {
					std::cout << "Better Luck Next Time" << std::endl;
					numOflose++;

					std::cout << "Play a new Gamemode: (1 for yes, 2 for no) ";
					std::cin >> newGame;
					if (newGame == 2) {
						done = false;
					}
					else {
						numOflose = 0;
					}

					if (newGame == 1) {
						numOflose = 0;
						break;
					}
				}



			} while (newGame != 2);
			break;
		default:
			std::cout << "Not a Gamemode" << std::endl;

		}
	} while (done);

	return 0;
}


