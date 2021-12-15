#include "LinkedLists.h"

void LinkedListsquestion(int choice);

// Default Constructor
LinkedLists::LinkedLists(){}

LinkedLists::LinkedLists(int userInput) {

	this->option = userInput;
}

void LinkedLists::setOption()
{
	this->option = option;
}

int LinkedLists::getOption(int option)
{
	if (option == 1)
	{
		std::cout << "PlaceHolder\n";
	}
	else if (option == 2)
	{
		std::cout << "Good Luck\n";
	}
	else if(option == 3)
	{
		std::cout << "PlaceHolder\n";
	}
	else
	{
		std::cout << "Error\n";
	}

	return option;
}

int LinkedLists::getAttempt(int choice)
{
	if (choice == 1) {
		LinkedListsquestion(choice);
	}
	else if (choice == 2) {
		LinkedListsquestion(choice);
	}
	else if (choice == 3) {
		LinkedListsquestion(choice);
	}
	return choice;
}


void LinkedListsquestion(int choice)
{
	std::string userResponse1;
	int option;
	std::cout << "Do you want any hints before stating? 1 = Yes, 2 = No\n"
		<< "=> ";
	std::cin >> option;

	switch (option)
	{
	case 1:
		std::cout << "Hint:\n";
		std::cout << "PlaceHolder\n";
		break;
	case 2:
		std::cout << "PlaceHolder\n";
		break;
	default:
		std::cout << "Error\n";
	}
}


