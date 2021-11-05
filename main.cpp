#include <iostream>
#include "ArraysAndString.h"

void ArrayAndStringOption();
void LinkedLists();


int main()
{
	int option{};

	std::cout << "Enter 1 for Arrays and Strings\n"
		<< "Enter 2 for Linked lists\n"
		<< "Enter 3 to exit\n"
		<< "=> ";
	std::cin >> option;

	switch (option)
	{
	case 1:
		ArrayAndStringOption();
		break;
	case 2:
		LinkedLists();
		break;
	case 3:
		std::exit(option);
	default:
		std::cout << "Error";
	}
	return 0;
}

void ArrayAndStringOption()
{
	ArraysAndString1 question;
	int choice;
	std::cout << " Enter 1 for Array and Strings question 1:\n "
			  <<"Enter 2 for Arrays and Strings question 2:\n "
			  << "=> ";
	std::cin >> choice;

	question.getChoice(choice);

}

void LinkedLists()
{
	std::cout << "Placeholder";

}
