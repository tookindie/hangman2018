#include <iostream>
#include <string>

struct Hangman
{
	std::string secret;
	int errors{ 0 };
	Hangman(std::string s)
	{
		secret = s;
	}

	// kontrollera input mot hrmliga ordet.
	void checkWord(std::string& input)
	{
		// TODO
	}
	void printHangman()
	{
		// TODO skriv inte ut i klartext 
		std::cout << secret << std::endl;
	}
};



int main()
{
	// initiera ordet 
	// TODO framtid plocka ord slumpmässigt
	//  Vår model enligt MVC
	Hangman hangman{ "AZZAR" };
	
	// instruktion till spelaren 
	
	// skriv ut platshållare per bokstav 
	hangman.printHangman();

	// __ __ __ __ __
	bool running = true;
	std::string inputString;
	while (running)
	{
		std::cout << "Ange en bokstav!" << std::endl;
		std::cin >> inputString;
		hangman.checkWord(inputString);
		// kontrollera inputString mot facit secretWordForHangman
		hangman.printHangman();
	}
	// loop tills hängning eller order funnet 

		// vänta på ny bokstav

	// loop
	// avsluta program 

	std::cout << "Hangman avslutas" << std::endl;
	return 0;
}
