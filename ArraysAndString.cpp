#include "ArraysAndString.h"

void Arrayquestion(int choice);

std::string userAnswer(std::string userAnswer);

// Default Construtor for Parent class
ArraysAndString::ArraysAndString(){}

ArraysAndString::ArraysAndString(std::string nameOfUser)
{
	this->name = nameOfUser;
}

ArraysAndString::ArraysAndString(std::string nameOfUser, int userOption)
{
	this->name = nameOfUser;
	this->option = userOption;
}

void ArraysAndString::setName(std::string n)
{
	this->name = name;
}

std::string ArraysAndString::getName(std::string n)
{

	return std::string(n);
}

void ArraysAndString::setOption()
{
	this->option = option;
}

int ArraysAndString::getOption(int option)
{

	switch (option)
	{
	case 1:
		std::cout << "Hash Tables: It is a data structure that maps keys values for a efficient lookup \n"
			<< "ArrayList and Resizeable Arrays: It is an array that resizes itself as needed while still providing 0(1) access.\n"
			<< "ArrayList<String> merge(String[] words, String [] more { \n "
			<< " ArrayList<String> sentance = new ArrayList<String>();\n"
			<< " for (String w : words) sentence.add(w)\n"
			<< " for (String w : more) sentence.add(w);\n"
			<< " return sentence;\n"
			<< "}\n";

		std::cout << "StringBuilder: Creates a resizable array of all the strings, copying them back to a string.\n"
			<< "String joinWords(String [] words) {\n"
			<< "  String sentence = new StringBuilder();\n"
			<< "  for (String w : words){\n"
			<< "	sentence.append(w)\n"
			<< " }\n"
			<< " return sentence.toString();\n"
			<< "}\n";
		break;
	case 2:
		std::cout << "Good Luck!\n";
		break;
	default:
		std::cout << "Error\n";

	}
	return option;
}

void ArraysAndString1::setAttempt(int *attempt)
{
	this->setAttempt(attempt);
}



int ArraysAndString1::getAttempt(int choice) {

	if (choice == 1) {
		question(choice);
	}
	else if (choice == 2) {
		question(choice);
	}
	else if (choice == 3) {
		question(choice);
	}

	return choice;
}



void Arrayquestion(int choice) {
	std::string userResponse1;
	std::string (*userResponseto1)(std::string);
	userResponseto1 = userAnswer;

	int option;
	std::cout << "Do you want any hints before stating? 1 = Yes, 2 = No\n"
		<< "=> ";
	std::cin >> option;
	std::string question1[7] = { "boolean isUniqueChars(String str){", "   if(str.length() > 128) return false;" ," ",
		" boolean[] char_set = new boolean[128];", "for(int i = 0; i < str.length(); i++{", "   int val = str.charAt(i);"};
	std::string userResponse[8];
	std::string i[8];
	switch (option)
	{
	case 1:
		if (choice == 1 && option == 1) {
			std::cout << "Hint:\n"
				<< "use If statement use char_set,and return true or false where necessary, Dont forget about brackets {}";
			std::cout << "Given the code below fill in the remaining blanks" << "\n";
			for (int x = 0; x < 6; ++x)
			{
				std::cout << question1[x] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 8; i++) {
				std::cin >> userResponse[i];
			}
			for (int n = 0; n < 8; ++n) {
				std::cout << userResponse[n] << "\n";
			}
			std::cout << "------------------------------------------------\n";
			std::cout << "What if you cant use additonal data structures?:\n ";
			std::cin >> userResponse1;
			std::string response = userAnswer(userResponse1);
			std::cout << response << "\n";
		}
		else if (choice == 2) {
			std::cout << "PlaceHolder\n";
		}
		break;
	case 2:
		if (choice == 1) {
			std::cout << "Given the code below fill in the remaining blanks";
			for (int x = 0; x < 6; ++x)
			{
				std::cout << question1[x] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 8; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "The elements in the array are: ";
			for (int n = 0; n < 8; ++n) {
				std::cout << userResponse[n] << "\n";
			}
			std::string response = userAnswer(userResponse1);
		}
		break;
	default:
		std::cout << "Error";
	}

}

std::string userAnswer(std::string userAnswer)
{


	return userAnswer;
}