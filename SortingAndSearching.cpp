#include "SortingAndSearching.h"

void Sortquestion(int choice);
//Default Constructor
SortingAndSearching::SortingAndSearching() {}

void SortingAndSearching::setOption()
{
	this->option = option;
}

int SortingAndSearching::getOption(int option)
{
	if (option == 1)
	{
		std::cout << "PlaceHolder\n";
	}
	else if (option == 2)
	{
		std::cout << "Placeholder\n";
	}
	else
	{
		std::cout << "PlaceHolder\n";
	}


	return option;
}


void SortingAndSearching::setAttempt(int *attempt)
{
	this->setAttempt(attempt);
}

int SortingAndSearching::getAttempt(int choice)
{
	if (choice == 1) {
		Sortquestion(choice);
	}
	else if (choice == 2) {
		Sortquestion(choice);
	}
	else if (choice == 3) {
		Sortquestion(choice);
	}

	return choice;
}

void Sortquestion(int choice)
{
	std::string userResponse1;
	int option;
	std::cout << "Do you want any hints before stating? 1 = Yes, 2 = No\n"
		<< "=> ";
	std::cin >> option;

	switch (option)
	{
	case 1:
		std::cout << "PlaceHolder\n";
		break;
	case 2:
		std::cout << "PlaceHolder\n";
		break;
	default:
		std::cout << "Error\n";
	}
}