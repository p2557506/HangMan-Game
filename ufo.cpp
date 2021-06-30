#include <iostream>
#include "ufo_functions.hpp"

int main() {

std::string codeword = "github";
std::string answer = "__________";

std::vector<char> incorrect;
bool guess = false;

int misses = 0;

greet();
//loop continues until player guesses or runs out
char letter;
while(answer!=codeword && misses < 7){
  display_misses(misses);

  display_status(incorrect, answer);
  
  //captures guess
  std::cout << "Please enter your guess:\n ";
  std::cin >> letter;

  for(int i = 0; i < codeword.length(); i++){
    if(codeword[i] == letter){
      answer[i] = letter;
      guess = true;

    } 
    }
    if(guess) {
      std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
    } else {
      
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
    
    }
    misses++;
    guess = false;
  }
//below while loop
end_game(answer, codeword);
}
