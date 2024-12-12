
// TODO: #include the file iostream
// TODO: #include the file string

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  // TODO: Declare a string variable. Name the variable singular_noun and
  // initialize it to some value such as "singular noun"
  std::string singular_noun = "singular noun";

  // TODO: Declare a string variable. Name the variable plural_noun and
  // initialize it to some value such as "plural noun"
  std::string plural_noun = "plural noun";

  // TODO: Declare a string variable. Name the variable present_tense_verb and
  // initialize it to some value such as "present tense verb"
  std::string present_tense_verb = "prsent tense verb";

  // TODO: Prompt the computer user by printing "Please enter a singular noun: "
  // and store what the computer user enters to the variable singular_noun.
  std::cout <<"Please enter a singular noun: ";
  std::cin >> singular_noun;

  // TODO: Prompt the computer user by printing "Please enter a plural noun: "
  // and store what the computer user enters to the variable plural_noun.
  std::cout <<"Please enter a plural noun: ";
  std::cin >> plural_noun;

  // TODO: Prompt the computer user by printing "Please enter a present tense
  // verb: " and store what the computer user enters to the variable
  // present_tense_verb.
  std::cout <<"Please enter a present tense: ";
  std::cin >> present_tense_verb;

  // TODO: Print a single new line ("\n")
  std::cout <<"\n";

  // TODO: Print "Computers are small enough to fit into a ", singular_noun, and
  // ".\n"

  std::cout << "Computers are small enough to fit into a " <<singular_noun 
            << ".\n";

  // TODO: Print "Computers can add, multiply, divide, and ",
  // present_tense_verb, and ".\n"
  std::cout << "Computer can add, multiply, divide, and " << present_tense_verb
            << ".\n";
  // TODO: Print "People can ", present_tense_verb, " too but computers do it
  // better.\n"
  std::cout << "People can " << present_tense_verb 
            << " too but computers do it better.\n";

  // TODO: Print "Computers have many ", plural_noun, " which gives them the
  // advantage\n"
  std::cout << "Computers have my " << plural_noun 
            << "which gives them the advantage\n";

  // TODO: Print "over people for many computational tasks.\n"
  
  std::cout << "over people for many computational tasks.\n";
  return 0;
}
