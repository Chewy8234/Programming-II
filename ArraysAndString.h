#ifndef ARRAYSANDSTRING_H
#define ARRAYSANDSTRING_H


#include <string>
#include <iostream>


class ArraysAndString
{
protected:
	int choice;
public:
	// Default Constructor
	ArraysAndString();
	// this was me trying something out
	/*void SetArrayAndString(std::string question, int trials, std::string answer,
		std::string result)
	{
		question = question;
		trials = trials;
		answer = answer;
		result = result;
	}*/

	void SetArrayAndString(int choice)
	{
		choice = choice;
	}

	int getChoice(int choice) {
		if (choice == 1)
		{
			std::cout << "Implement an algorithm to determine if a string has all unique characters. What if you"
				<< "cannot use additional data structures?\n";
		}
		else {
			std::cout << "Error";
		}

		return choice;
	}



};

//class ArraysAndString1 : public ArraysAndString
//{
//
//};

class ArraysAndString1 : public ArraysAndString
{
public:

	int getChoice(int choice)
	{
		if (choice == 2)
		{
			std::cout << "Given two strings, wite a method to decide if one is a permutation"
				<< "of the other";
		}

		return choice;
	}

};


#endif // 
