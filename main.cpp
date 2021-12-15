#include <iostream>
#include "ArraysAndString.h"
#include "LinkedLists.h"
#include "SortingAndSearching.h"


/** @file main.cpp

 *  @brief Brief description of file.

 *

 *  @brief This file contains the main function that executes the program.

 *

 *  @author Sebastian Campos

 *  @bug No known bugs.

 */

void multipleChoice();
std::string Welcome();
void preview();
void getResultsOfLinkedLists();
void getResultsofArrayAndString();

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
			multipleChoice();
			getResultsofArrayAndString();
			break;
		case '2':
			Welcome();
			preview();
			multipleChoice();
			getResultsOfLinkedLists();
			break;
		case '3':
			Welcome();
			multipleChoice();
			preview();
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
	int age;

	std::cout << "Enter name: " << "\n";
	std::cin >> name;
	std::cout << "Enter age: " << "\n";
	std::cin >> age;
	ArraysAndString str;
	std::cout << "Welcome " << str.getName(name) << "!" << "\n"
		<< "Age: " << str.getAge(age)<< "\n"
		<< "This program is to help prepare the user to" << "\n"
		<< "understand and answer questions related to questions from Cracking the Code Interview\n";


	return name;
}

void preview()
{

	int option;

	ArraysAndString preview;
	LinkedLists preview2;
	SortingAndSearching preview3;

	std::cout << "Do you want to preview of topics that will help with solving these programs?\n "
		<< "Enter 1 for Arrays and String, Enter 2 for Linked Lists, Enter 3 for Sorting and Searching\n," 
		"Enter 4 to skip:\n"
		<< "=> ";
	std::cin >> option;

	switch (option)
	{
	case 1:
		preview.getOption(option);
		break;
	case 2:
		preview.getOption(option);
		break;
	case 3:
		preview.getOption(option);
		break;
	case 4:
		multipleChoice();
		break;
	default:
		std::cout << "Pick valid option\n";
	}
}


void multipleChoice()
{
	ArraysAndString1* question = new ArraysAndString1;
	LinkedLists* lists = new LinkedLists;
	SortingAndSearching* sort = new SortingAndSearching;
	int choice;
	int option;


	std::cout << " Enter 1 to get the option ArrayAndString\n"
		<< " Enter 2 to get the option LinkedLists\n"
		<< " Enter 3 to get the option SortingAndSearching\n"
		<< "=>";
	std::cin >> option;


	std::cout << " Enter 1 to get choice 1\n"
		<< " Enter 2 to get choice 2\n"
		<< " Enter 3 to get choice 3\n"
		<< "=>";
	std::cin >> choice;


	switch (choice)
	{
	case 1:
		if (option == 1)
		{
			question->getQuestion(choice);
			question->question(choice);
		}
		else if (option == 2)
		{
			lists->getQuestion(choice);
			lists->question2(choice);
		}
		else if (option == 3)
		{
			sort->getQuestion(choice);
			sort->Sortquestion(choice);
		}

		break;
	case 2:
		if (option == 1)
		{
			question->getQuestion(choice);
			question->question(choice);
		}
		else if (option == 2)
		{
			lists->getQuestion(choice);
			lists->question2(choice);
		}
		else if (option == 3)
		{
			sort->getQuestion(choice);
			sort->Sortquestion(choice);
		}
		break;
	case 3:
		if (option == 1)
		{
			question->getQuestion(choice);
			question->question(choice);
		}
		else if (option == 2)
		{
			lists->getQuestion(choice);
			lists->question2(choice);
		}
		else if (option == 3)
		{
			sort->getQuestion(choice);
			sort->Sortquestion(choice);
		}
		break;
	default:
		std::cout << "Invalid option\n";
	}
}

void getResultsofArrayAndString()
{
	ArraysAndString1* arrStr = new ArraysAndString1;
	int input;
	std::cout << "Enter 1 for the answer for question one of LinkedLists\n"
		<< "Enter 2 for the answer for question two of LinkedLists\n"
		<< "Enter 3 for the answer for question three of LinkedLists\n"
		<< "=>";
	std::cin >> input;
	switch (input) {
	case 1:
		arrStr->getAnswer(input);
		break;
	case 2:
		arrStr->getAnswer(input);
	case 3:
		arrStr->getAnswer(input);
		break;
	default:
		std::cout << "Invalid input";
	}
}


void getResultsOfLinkedLists()
{
	LinkedLists list;
	int answer;

	std::cout << "Enter 1 for the answer for question one of LinkedLists\n"
		<< "Enter 2 for the answer for question two of LinkedLists\n"
		<< "Enter 3 for the answer for question three of LinkedLists\n"
		<< "=>";
	std::cin >> answer;

	switch (answer) {
	case 1:
		list.getAnswer(answer);
		break;
	case 2:
		list.getAnswer(answer);
	case 3:
		list.getAnswer(answer);
		break;
	default:
		std::cout << "Invalid input";
	}

}

void getResultsOfSortingAndSearching()
{
	SortingAndSearching sort;
	int answer;

	std::cout << "Enter 1 for the answer for question one of LinkedLists\n"
		<< "Enter 2 for the answer for question two of LinkedLists\n"
		<< "Enter 3 for the answer for question three of LinkedLists\n"
		<< "=>";
	std::cin >> answer;

	switch (answer) {
	case 1:
		sort.getAnswer(answer);
		break;
	case 2:
		sort.getAnswer(answer);
	case 3:
		sort.getAnswer(answer);
		break;
	default:
		std::cout << "Invalid input";
	}

}