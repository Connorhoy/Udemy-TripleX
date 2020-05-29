// The following line of code includes the preprocessor directive and the header file.
#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{

    // Text displayed via strings with a breakline accomplished via 'endl'.
    std::cout << "\n\nYou are an ONI Agent attempting to access a level " << Difficulty;
    std:: cout << " Forerunner artifact via a terminal..\nYou must enter the correct numbers into the forerunner terminal to continue..\n";

}

bool PlayGame(int Difficulty)
{

    PrintIntroduction(Difficulty);

    // Variables
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
    
    // Variables added upon each other via the use of + declared via the term 'sum'.
    const int CodeSum = CodeA + CodeB + CodeC;
    // Variables multiplied against each other with * declared via the term 'product'.
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Endl utilized to create a breakline between previous strings and the new sum of our variables with is displayed via calling 'sum'.
    std::cout << "There are three forerunner numbers in the code..";
    std::cout << "\nThe numbers add up to: " << CodeSum;

    // Endl utilized to create a breakline between 'sum' and new product of our variables, with is displayed via calling 'product'.
    std::cout << "\nThe numbers multiply to: " << CodeProduct << std::endl;

    // Establishes three variables for player guesses and their input.
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;


    // Declares and intializes GuessSum and GuessProduct.
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct =  GuessA * GuessB * GuessC;

    // If/Else statement that are triggered depending on the player input.
    if (GuessSum = CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou got it right!\n\n";
        return true;
    }
    else
    {
        std::cout << "\nYou failed to crack the code, try again!";
        return false;
       
    } 

}

// Establishes basic foundation of the remainder of our code.
int main()
{
    srand(time(NULL)); // Creates new random sequence based on the time of day.

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;


     while (LevelDifficulty <= MaxDifficulty) // Loop the game until max level completed.
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors.
        std::cin.ignore(); // Discards the buffer.
    
        if (bLevelComplete) 
        {
            ++LevelDifficulty;
        }
    
    }
 
    std::cout << "Great work agent, you got into the forerunner artifact without triggering any of the defenses. Who knows what wonders this artifact holds?";
    return 0;
}