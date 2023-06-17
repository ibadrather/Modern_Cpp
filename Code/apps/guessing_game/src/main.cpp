#include <iostream>
#include <random>    // The library needed for generating random numbers
#include <string>    // The library needed for using string objects

int main() {
    std::cout << "Guess the number!" << std::endl;

    // Create a random number generator
    // 'std::random_device' is a uniformly-distributed integer random number generator 
    // that produces non-deterministic random numbers.
    std::random_device rd;

    // Use the random device to seed the Mersenne Twister algorithm 
    // 'std::mt19937' is a Mersenne Twister pseudo-random generator of 32-bit numbers.
    std::mt19937 gen(rd());

    // Create a distribution - we want integers between 1 and 100
    // 'std::uniform_int_distribution' Produces random integers according to a uniform discrete distribution
    std::uniform_int_distribution<> distrib(1, 100);

    // Generate a random number using 'distrib' and the Mersenne Twister algorithm 'gen'
    int secret_number = distrib(gen);

    // Initialize a variable to count the number of guesses
    int num_of_guesses = 0;

    while(true) {
        std::cout << "Please input your guess." << std::endl;

        // Get the guess from the user
        std::string input;
        std::getline(std::cin, input);

        // Try to convert the input to an integer
        int guess;
        try {
            // 'std::stoi' converts the string into an integer
            // If conversion is not possible (e.g., for a string of letters), it throws 'std::invalid_argument'
            guess = std::stoi(input);
        } catch (std::invalid_argument&) {
            // If the conversion fails, restart the loop and ask for another input
            continue;
        }

        // Compare the guess with the secret number
        if (guess < secret_number) {
            std::cout << "Too small!" << std::endl;
        } else if (guess > secret_number) {
            std::cout << "Too big!" << std::endl;
        } else {
            // If the guess equals the secret number, the user has won
            std::cout << "You win!!!" << std::endl;
            break; // Exit the loop
        }

        // If the guess was incorrect, increment the guess count
        num_of_guesses++;

        // Print the current number of guesses
        std::cout << "Number of guesses taken: " << num_of_guesses << std::endl;
    }

    // After the loop, print the final number of guesses
    std::cout << "Number of guesses taken: " << num_of_guesses << std::endl;
    
    return 0;  // Return 0 to indicate that the program finished successfully
}
