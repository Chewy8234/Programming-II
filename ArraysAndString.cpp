#include "ArraysAndString.h"
#include <string>


/** @file ArraysAndString.cpp

 * 

 *

 *  @brief This file contains the class functions definitons that was declared in
 * ArrayAndString.h file
 * 

 *

 *  @author Sebastian Campos

 *  @bug No known bugs.

 */


// Default Construtor for Parent class
ArraysAndString::ArraysAndString() {}


/** @brief User enters their name 

 *

 *

 *  @param The parameter is name to print the name of the user

 *  @return name of the user

 */


ArraysAndString::ArraysAndString(std::string name)
{
	this->name = name;
}


/** @brief Overloads the default constructor

 *

 *

 *  @param name is to print the name of the user, while age is to print the age of the uer

 *  @return returns the name and age of the user

 */

ArraysAndString::ArraysAndString(std::string name, int age)
{
	this->name = name;
	this->age = age;

}



/** @brief Sets the name of the user

 *

 *

 *  @param name = n;

 *  @return Returns nothing 

 */

void ArraysAndString::setName(std::string n)
{
	this->name = n;
}


/** @brief Returns the name from the private

 *

 *

 *  @param name is to print the name of the user

 *  @return returns the name in the form of string

 */

std::string ArraysAndString::getName(std::string n)
{

	return std::string(n);
}



/** @brief accessing the private option and making it equal to to o

 *

 *

 *  @param setting option to the para o

 *  @return returns a void

 */



void ArraysAndString::setOption(int o)
{
	this->option = o;
}

/** @brief accessing the private question and making it equal to to question

 *

 *

 *  @param setting question to the parameter question

 *  @return returns a void

 */


void ArraysAndString::setQuestion(int question)
{
	this->question = question;
}

/** @brief User when prompted will be able to pick what question they would want to answer between options 1-3

 *

 *  @param setting option to the para o

 *  @return returns a question

 */

int ArraysAndString::getQuestion(int question)
{
	switch (question)
	{
	case 1:
		std::cout << "Implement an algorithm to determine if a string has all unique characters\n";
		break;
	case 2:
		std::cout << "Given two strings, wite a method to decide if one is a permutation"
			<< "of the other\n";
		break;
	case 3:
		std::cout << "Assume you have a method isSubstring which checks if one word is a substring of another."
			<< "Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call "
			<< "isSubstring (e.g " " waterbottle" " is rotation of" "erbottlewat" ").\n";
		break;
	default:
		std::cout << "Error";
	}
	return question;
}


/** @brief User when prompted will be able to pick whether question they wwant to pick 

 *

 *  @param setting option to the para o

 *  @return returns a option

 */

int ArraysAndString::getOption(int option)
{

	switch (option)
	{
	case 1:
		std::cout << "This is how to create a simple strings in Java\n"
			<< "String literal: String str = 'Java'\n"
			<< "Dynamically allocated using the new operator: String str = new String('Java');\n";
		break;
	case 2:
		std::cout << "Arrays using for loops\n"
			<< "String[] companies = {'Apple', 'Google', 'Microsoft', 'Sony'}\n"
			<< "for (String i companies){:\n "
			<< "System.out.println(i);\n"
			<< "}\n";
		break;
	case 3:
		std::cout << "Arrays using Multidimensional Arrays\n"
			<< "int[][] myCars = {{'Toyota','Tesla'}, {'BMW','Ford'}}\n";
		break;
	default:
		std::cout << "Invalid Input\n";
	}
	return option;
}

/** @brief assigning the private data type of age to a

 *

 *  @param setting age to the para a

 *  @return returns a void

 */

void ArraysAndString::setAge(int a)
{
	this->age = a;
}

/** @brief assigning age to a

 *

 *  @param setting age to the para a

 *  @return returns age in a

 */

int ArraysAndString::getAge(int a)
{

	return a;
}


/** @brief Points to set attempt and to attempt

 *

 *  @param setting attempt to the para attempt

 *  @return returns a void

 */

void ArraysAndString1::setAttempt(int* attempt)
{
	this->setAttempt(attempt);
}


/** @brief After the user enters what question to answer the question is accessed

 *

 *  @param choice is the paramter that is used to access the question

 *  @return returns a int choice

 */


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

/** @brief After the user enters what question to view they will be prompted to see what the answers are.

 *

 *  @param int answer to print answer

 *  @return returns a int answer

 */


int ArraysAndString1::getAnswer(int answer)
{
	if (answer == 1)
	{
		// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
		std::string input[12] = { "boolean isUniqueChars(String str){", "if(str.length() > 128 return false;\t", "boolean[] char_set = new boolean[128]\t",
		"  for(int i = 0; i < str.length(); i++){", "int val = str.charAt(i);\t", "if(char_set[val]{\t", "return false;\t\t", "}\t"
		, "char_set[val] = true;\t", " }", " return true;", "}" };
		for (int x = 0; x < 12; ++x)
		{
			std::cout << input[x] << "\n";
		}
		std::cout << "Second part of the answer: Compare every characyer of the string to every other character. This will take O(n^2)"
			<< "time and O(1) space";
	}
	else if (answer == 2)
	{
		//McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
		std::string input[9] = { "String sort(String s){\t", "char[] content = s.toCharArray();\t\t", "java.util.Arrays.sort(content);\t\t",
			"return new String(content);\t\t","}", "boolean permutation(String s, String t){", "if(s.length() != t.length()){\t", "return false\t\t", "}\t" };
		for (int x = 0; x < 9; ++x)
		{
			std::cout << input[x] << "\n";
		}
	}
	else if (answer == 3)
	{
		// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
		std::string input[8] = { "boolean isRotation(String s1, String s2{", "int len = s1.length()\t", "if(len == s2.length() && len > 0){\t",
		"String s1s1 = s1 + s1;\t\t", "return isSubstring(s1s1, s2)\t\t", "}\t", "return false\t", "}" };
		for (int x = 0; x < 8; ++x)
		{
			std::cout << input[x] << "\n";
		}
	}

	return answer;
}


/** @brief User enters the input of what question they want to solve

 *

 *  @param int choice to access the choice and print choice

 *  @return returns a int choice

 */



void ArraysAndString1::question(int choice)
{
	std::string userResponse1;

	int option;
	std::cout << "Do you want any hints before stating? 1 = Yes, 2 = No\n"
		<< "=> ";
	std::cin >> option;
	std::string userResponse[8];
	switch (option)
	{
	case 1:
		if (choice == 1 && option == 1) {
			std::cout << "Hint:\n"
				<< "use If statement use char_set,and return true or false where necessary, Dont forget about brackets {}";
			std::cout << "Given the code  fill in the remaining blanks" << "\n";

			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::string question1[7] = { "boolean isUniqueChars(String str){", "   if(str.length() > 128) return false;" ," ",
		" boolean[] char_set = new boolean[128];", "for(int i = 0; i < str.length(); i++{", "   int val = str.charAt(i);" };
			for (int x = 0; x < 6; ++x)
			{
				std::cout << question1[x] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 8; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 8; ++n) {
				std::cout << userResponse[n] << "\n";
			}
			std::cout << "------------------------------------------------\n";
			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::cout << "What if you cant use additonal data structures?:\n ";
			std::cin >> userResponse1;
			std::cout << "This is your response to part 2 of question 1: " << userResponse1 << "\n";
		}
		else if (choice == 2 && option == 1) {
			std::cout << "Hint for question 2: " << "Use bool and return false:\n";
			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::string question2[5] = { "String sort(String s){", "char[] content = s.toCharArray();", "java.util.Arrays.sort(content)"
			, "return new String(content)", "}" };

			for (int i = 0; i < 5; i++)
			{
				std::cout << question2[i] << "\n";
			}
			for (int i = 0; i < 5; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 5; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		else if (choice == 3 && option == 1)
		{
			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::string question3[4] = { "boolean isRotation(String s1, String s2){",
			"int len = s1.length();", "/Check that s1 and s2 are equal length and not empty" };
			for (int i = 0; i < 4; i++)
			{
				std::cout << question3[i] << "\n";
			}
			for (int i = 0; i < 4; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 6; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		break;
	case 2:
		if (choice == 1 && option == 2) {
			std::cout << "Given the code fill in the remaining blanks";
			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::string question1[7] = { "boolean isUniqueChars(String str){", "   if(str.length() > 128) return false;" ," ",
		" boolean[] char_set = new boolean[128];", "for(int i = 0; i < str.length(); i++{", "   int val = str.charAt(i);" };
			for (int x = 0; x < 6; ++x)
			{
				std::cout << question1[x] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 8; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 8; ++n) {
				std::cout << userResponse[n] << "\n";
			}
			std::cout << "------------------------------------------------\n";
			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::cout << "What if you cant use additonal data structures?:\n ";
			std::cin >> userResponse1;
			std::cout << "This is your response to part 2 of question 1: " << userResponse1 << "\n";
		}
		else if (choice == 2 && option == 2)
		{
			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::string question2[5] = { "String sort(String s){", "char[] content = s.toCharArray();", "java.util.Arrays.sort(content"
			, "return new String(content)", "}" };
			for (int i = 0; i < 5; i++)
			{
				std::cout << question2[i] << "\n";
			}
			for (int i = 0; i < 5; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 5; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		else if (choice == 3 && option == 2)
		{
			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::string question3[4] = { "boolean isRotation(String s1, String s2){",
			"int len = s1.length();\n", "/Check that s1 and s2 are euqal length and not empty" };
			for (int i = 0; i < 4; i++)
			{
				std::cout << question3[i] << "\n";
			}
			for (int i = 0; i < 4; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 6; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		break;
	default:
		std::cout << "Error";
	}
}



