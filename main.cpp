#include <iostream>
#include "ArraysAndString.h"
#include "LinkedLists.h"
#include "SortingAndSearching.h"


void MultipleOption();
std::string Welcome();
void preview();


int main()
{
	char option{};
	bool userContinue = true;

	while (userContinue) {
		std::cout << "Enter 1 for Arrays and Strings\n"
			<< "Enter 2 for Linked lists\n"
			<< "Enter 3 for Sorting and Searching\n"
			<< "Enter 4 to exit\n"
			<< "=> ";
		std::cin >> option;

		switch (option)
		{
		case '1':
			Welcome();
			preview();
			MultipleOption();
			break;
		case '2':
			Welcome();
			preview();
			MultipleOption();
			break;
		case '3':
			Welcome();
			preview();
			MultipleOption();
			break;
		case '4':
			userContinue = false;
			break;
		default:
			std::cout << "Error\n";
		}
	}
	return 0;
}

std::string Welcome()
{
	std::string name;

	std::cout << "Enter name: " << "\n";
	std::cin >> name;

	ArraysAndString* n = new ArraysAndString;
	n->setName(name);
	std::cout << "Welcome " << n->getName(name) << "!" << "\n"
		<< "This program is to help prepare the user to" << "\n"
		<< "understand and answer questions related to questions from Cracking the Code Interview\n";

	return name;
}

void preview()
{
	ArraysAndString* programPreview = new ArraysAndString;
	LinkedLists* programReview2 = new LinkedLists;
	SortingAndSearching* programReview3 = new SortingAndSearching;
	int option;

	std::cout << "Do you want to preview of topics that will help with solving these programs?\n "
		<< "Enter 1 for Arrays and String, Enter 2 for Linked Lists, Enter 3 for Sorting and Searching\n"
		<< "=> ";
	std::cin >> option;

	switch (option)
	{
	case 1:
		programPreview->getOption(option);
		break;
	case 2:
		programReview2->getOption(option);
		break;
	case 3:
		programReview3->getOption(option); 
		break;
	default:
		std::cout << "Pick valid option\n";
	}
}



void MultipleOption()
{
	ArraysAndString1* question = new ArraysAndString1;
	LinkedLists* lists = new LinkedLists;
	SortingAndSearching* Sort = new SortingAndSearching;
	int choice;
	int userInput;
	std::cout << "Enter 1 for ArrayAndStrings\n "
		<< "Enter 2 for LinkedLists\n "
		<<"Enter 3 for SortingAndSearching\n"
		<< "=> ";
	std::cin >> choice;

	std::cout << "Enter 1 for question 1\n"
		<< "Enter 2 for question 2\n "
		<< "Enter 3 for question 3\n"
		<< "=>";
	std::cin >> userInput;

	switch (choice)
	{
	case 1:
		if (choice == 1  && userInput == 1 || 2 || 3 && question)
		{
			question->getChoice(choice);
			question->getAttempt(choice);
		}
		break;
	case 2:
		if (choice == 2 && userInput == 1 || 2 || 3 && lists)
		{
			lists->getChoice(choice);
			lists->getAttempt(choice);
		}
		break;
	case 3:
		if (choice == 3 && userInput == 1 || 2 || 3 && Sort)
		{
			Sort->getChoice(choice);
			Sort->getAttempt(choice);
		}
		break;
	default:
		std::cout << "Invalid input";
	}
}

