#ifndef ARRAYSANDSTRING_H
#define ARRAYSANDSTRING_H


#include <string>
#include <iostream>


class ArraysAndString
{

private:
	int choice;
	std::string name;
	int option;
public:
	// Default Constructor
	ArraysAndString();
	ArraysAndString(std::string nameOfUser);
	ArraysAndString(std::string nameOfUser, int userOption);

	void setName(std::string n);
	std::string getName(std::string n);
	void setOption();
	virtual int getOption(int option);

	void SetArrayAndString(int *choice)
	{
		this->choice = *choice;
	}

	virtual int getChoice(int *choice) {
		if (*choice == 1)
		{
			std::cout << "Implement an algorithm to determine if a string has all unique characters\n";
		}
		else {
			std::cout << "Error";
		}

		return *choice;
	}


};


class ArraysAndString1 : public ArraysAndString
{
private:
	int choice;
public:

	void setAttempt(int *attempt);
	virtual int getAttempt(int choice);

	virtual int getChoice(int choice)
	{
		if (choice == 2)
		{
			std::cout << "Given two strings, wite a method to decide if one is a permutation"
				<< "of the other\n";
		}
		else if (choice == 3) {
			std::cout << "Assume you have a method isSubstring which checks if one word is a substring of another."
				<< "Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call "
				<< "isSubstring (e.g " " waterbottle" " is rotation of" "erbottlewat" ").\n";
		}

		return choice;
	}
	void question(int choice) {
		std::string userResponse1;

		int option;
		std::cout << "Do you want any hints before stating? 1 = Yes, 2 = No\n"
			<< "=> ";
		std::cin >> option;
		std::string question1[7] = { "boolean isUniqueChars(String str){", "   if(str.length() > 128) return false;" ," ",
			" boolean[] char_set = new boolean[128];", "for(int i = 0; i < str.length(); i++{", "   int val = str.charAt(i);" };
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
			}
			else if (choice == 2) {
				std::cout << "PlaceHolder";
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
			}
			break;
		default:
			std::cout << "Error";
		}

	}


};


#endif // ARRAYSLISTANDSTRING_H
