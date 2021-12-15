#include "SortingAndSearching.h"




/** @file SortingAndSearching.cpp

 
 *  @brief This file contains the class functions definitons that was declared in
 * SortingAndSearching.h file
 *

 *

 *  @author Sebastian Campos

 *  @bug No known bugs.

 */


//Default Constructor
SortingAndSearching::SortingAndSearching() {}


/** @brief accessing the private option and making it equal to to o

 *

 *

 *  @param setting option to the para o

 *  @return returns a void

 */

void SortingAndSearching::setOption(int o)
{
	this->option = o;
}



/** @brief User when prompted will be able to pick whether question they wwant to pick

 *

 *  @param setting option to the para o

 *  @return returns a option

 */
int SortingAndSearching::getOption(int option)
{
	if (option == 1)
	{
		std::cout << "The way to find a sorted matrix is to access each array and search elements one by one\n";
	}
	else if (option == 2)
	{
		std::cout << "Compare every element and then sort and merge them after dividing the list";
	}
	else
	{
		std::cout << "Invalid input\n";
	}


	return option;
}


/** @brief accessing the private question and making it equal to to question

 *

 *  @param setting question to the parameter question

 *  @return returns a void

 */
void SortingAndSearching::setQuestion(int question)
{
	this->question = question;
}


/** @brief User when prompted will be able to pick what question they would want to answer between options 1-3

 *

 *  @param setting option to the para o

 *  @return returns a question

 */

int SortingAndSearching::getQuestion(int question)
{
	switch (question)
	{
	case 1:
		std::cout << "Sorted Merge: You are given two sorted arrays, A and B, where A has a large enough buffer at"
			<< "the end to hold B. Wrote a method a merge B into A in sorted order\n";
		break;
	case 2:
		std::cout << "Imagine you have a 20 GB file with one string per line. Explain how you would start the file\n";
		break;
	case 3:
		std::cout << "Given an M x N matrix in which each row and each column is sorted in ascending order, write a method to find an element\n";
		break;
	default:
		std::cout << "Invalid input\n";
	}

	return question;
}

/** @brief After the user enters what question to answer the question is accessed

 *

 *  @param choice is the paramter that is used to access the question

 *  @return returns a int choice

 */

void SortingAndSearching::setAttempt(int *attempt)
{
	this->setAttempt(attempt);
}

/** @brief After the user enters what question to answer the question is accessed

 *

 *  @param choice is the paramter that is used to access the question

 *  @return returns a int choice

 */


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



/** @brief User enters the input of what question they want to solve

 *

 *  @param int choice to access the choice and print choice

 *  @return returns a int choice

 */



void SortingAndSearching::Sortquestion(int choice)
{
	std::string userResponse1;
	int option;
	std::cout << "Do you want any hints before stating? 1 = Yes, 2 = No\n"
		<< "=> ";
	std::cin >> option;

	std::string userResponse[12];
	std::string response;

	switch (option)
	{
	case 1:
		if (option == 1 && choice == 1)
		{
			std::cout << "Hint for question 1: "
				<< "If else is needed, "
				<< "use indexA and indexB";
			std::string question1[7] = { "void merge(int[] b, int lastA, int lastB){", " int indexA = lastA - 1;/ index of last elemet in array a",
			" int indexB = lastB - 1 / Index of last element in arrayb/", " int indexMerged = lastB + lastA -1; / end of merge arary", " /Merge a and b, starting from the last element in each",
			"while (indexB >= 0) {", "/end of a is  > than end of b/" };
			for (int i = 0; i < 7; i++)
			{
				std::cout << question1[i] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 10; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 10; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		else if (option == 1 && choice == 2)
		{
			std::cout << "Hint for question 2: "
				<< "No code needed, Divide the chucks up";
			std::cout << "Enter response here: ";
			std::cin >> response;
			std::cout << "Your answer was: " << response;
		}
		else if (option == 1 && choice == 3)
		{
			std::cout << "Hint for question 3: "
				<< "Use if and else and it returns false";
			std::string question3[3] = { "boolean findElement(int [][] natrix, int elem){",
			" int row = 0", " int col = matrix[0].length - 1;" };
			for (int i = 0; i < 3; i++)
			{
				std::cout << question3[i] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 11; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 11; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		break;
	case 2:
		if (choice == 1 && option == 2)
		{
			std::string question1[7] = { "void merge(int[] b, int lastA, int lastB){", "int indexA = lastA - 1;/ index of last elemet in array a",
		   "int indexB = lastB - 1 / Index of last element in arrayb/", "int indexMerged = lastB + lastA -1; / end of merge arary", "/Merge a and b, starting from the last element in each",
		   "while (indexB >= 0) {", "/end of a is  > than end of b/" };
			std::cout << "Enter response here: ";
			for (int i = 0; i < 10; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 10; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		else if (choice == 2 && option == 2)
		{
			std::string userResponse;
			std::cout << "Enter response here: ";
			std::cin >> userResponse;
			std::cout << "Your answer was: " << response;
		}
		else if (choice == 3 && option == 2)
		{
			std::string question3[3] = { "boolean findElement(int [][] natrix, int elem){",
		" int row = 0", " int col = matrix[0].length - 1;" };
			for (int i = 0; i < 3; i++)
			{
				std::cout << question3[i] << "\n";
			}
			for (int i = 0; i < 11; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 11; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		break;
	default:
		std::cout << "Error\n";
	}
}

/** @brief Points to the private m_answer

 *

 *  @param setting m_answer = answer

 *  @return returns a void

 */
void SortingAndSearching::setAnswer(int answer)
{
	this->m_answer = answer;
}

/** @brief After the user enters what question to view they will be prompted to see what the answers are.

 *

 *  @param int answer to print answer

 *  @return returns a int answer

 */


int SortingAndSearching::getAnswer(int answer)
{

	if (answer == 1)
	{
		// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 

		std::string question1[18] = { "void merge(int[] b, int lastA, int lastB){", " int indexA = lastA - 1;/ index of last elemet in array a",
		" int indexB = lastB - 1 / Index of last element in arrayb/", " int indexMerged = lastB + lastA -1; / end of merge arary", " /Merge a and b, starting from the last element in each",
		"while (indexB >= 0) {", "/end of a is  > than end of b/", "if(indexB >= 0{", " a[indexMerged] = a[indexA] > b[indexB]{",
		" a[indexMerged] = a[indexA];//copy element", " indexA--", "}else{", " a[indexMerged] = b [indexB]; // copy element",
		" indexB--;", " }", " indexMerged--;", " }", "}"};
		for (int i = 0; i < 18; i++)
		{
			std::cout << question1[i] << "\n";
		}
	}
	else if (answer == 2) {
		//McDowell, G.L. (2015).Cracking the coding interview 6th edition : 189 programming questions and solutions.CareerCup.
		std::cout << "Divide the file into chucks where x is the amount of memory."
			<< "Each section is sorted separately and saved back in the system"
			<< "Once all the chucks are sorted, we merge the chucks, one by one until it is fully sort";
	}

	else if (answer == 3)
	{
		// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
		std::string input[24] = {" boolean findElement(int[][]matrix, int elem){","  int row = 0;", "  int col = martix[0].length -1;"
		, "  while(row < martix.length && col >= 0{", "   if(matrix[row][col] == elem){", "    return true;"
		,"  } else if (matrix[row][col] > elem){", "  col--;", "  }else{","   row++",
		"  }", " }", " return false;", "}"};
		for (int x = 0; x < 24; ++x)
		{
			std::cout << input[x] << "\n";
		}
	}
	else {
		std::cout << "Invalid input";
	}


	return answer;
}