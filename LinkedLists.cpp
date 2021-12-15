#include "LinkedLists.h"




/** @file LinkedLists.cpp

 
 *
 *  @brief This file contains the class functions definitons that was declared in
 * LinkedLists.h file
 *

 *

 *  @author Sebastian Campos

 *  @bug No known bugs.

 */

// Default Constructor
LinkedLists::LinkedLists(){}


/** @brief accessing the private option and making it equal to to o

 *

 *

 *  @param setting option to the para o

 *  @return returns a void

 */




void LinkedLists::setOption(int o)
{
	this->option = o;
}

/** @brief User when prompted will be able to pick whether question they wwant to pick

 *

 *  @param setting option to the para o

 *  @return returns a option

 */

int LinkedLists::getOption(int option)
{
	if (option == 1)
	{
		std::cout << "Basic Linked List:\n";
		std::string demoLinkedList[4] = {"class Main{", "public static void main(String[] args{", 
			"LinkedList<String> string = new LinkedList<String>();"};
		for (int i = 0; i < 4; i++)
		{
			std::cout << demoLinkedList[4] << "\n";
		}

	}
	else if (option == 2)
	{
		std::cout << "Basic Linked List:\n";
		std::string demoLinkedList2[8] = { "class Main{", "public static void main(String[] args{",
			"LinkedList<String> string = new LinkedList<String>();", "string.add('str');","System.out.println(string);", " }", "}"};

		for (auto it = std::cbegin(demoLinkedList2); it != std::cend(demoLinkedList2); it++) {
			std::cout << *it << "\n";
		}
		
	}
	else
	{
		std::cout << "Invalid Input\n";
	}

	return option;
}

/** @brief User when prompted will be able to pick what question they would want to answer between options 1-3

 *

 *  @param setting option to the para o

 *  @return returns a question

 */


int LinkedLists::getQuestion(int question)
{
	switch (question)
	{
	case 1:
		std::cout << "Write code to remove duplicates from an unsorted linked list\n";
		break;
	case 2:
		std::cout << "Implement an algorithm to find the kth to\n"
			<< "last element of a single linked list\n";
		break;
	case 3:
		std::cout << "Implement a function to check if a linked list is a palindrome\n";
		break;
	default:
		std::cout << "Error\n";
	}
	return question;
}

/** @brief After the user enters what question to view they will be prompted to see what the answers are.

 *

 *  @param int answer to print answer

 *  @return returns a int answer

 */



int LinkedLists::getAnswer(int answer)
{
		if (answer == 1)
		{
			//McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::string input[13] = { "void deleteDups(LinkedListNode n){", " HashSet<Integer> set = new HashSet <Integer>()",
			"LinkedListNode previous = null;" , "while (n != null){", "if(set.contains(n.data)){", "previous.next = n.next;",
			"}else{", "set.add(n.data);", "previous = n;", " }", "n = n.next;", "}", " }" };
			for (int x = 0; x < 13; ++x)
			{
				std::cout << input[x] << "\n";
			}
		}
		else if (answer == 2) {
			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::string input[10] = { "int printKthToLast(LinkedListNode head", " if(head ==null){", "  return 0;", "}",
		"int index = printKthToLast(head.next,k) + 1;", "if(index == k) {", " System.out.println(k + k 'to the last node is ' + head.data",
		" }", "return index;", "}" };

			for (int x = 0; x < 10; ++x)
			{
				std::cout << input[x] << "\n";
			}
		}
	
		else if (answer == 3)
		{
			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::string input[24] = { "boolean isPalidrome(LinkedListNOde head){", " LinkedListNode reversed = reverseAndClone(head);", " return isEqual(head, reversed);", "}",
		" LinkedListNode reverseAndClone(LinkedListNode node{", " LinkedListNode head = null;", " while (node != null{", "  LinkedListNode n = new LinkedListNode(node.data);// Clone",
		"  n.next = head;", "  head = n;", "  node = node.next;", "  }", "  return head;", "}", "boolean isEqual(LinkedListNode one, LinkedListNode two){", " while(one != null && two != null){",
		"   if(one.data != two.data){", "    return false;", "   }", "   one = one.next;", "   two = two.next;", "  }", "  return one == null && two == null;",
		"}" };
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

/** @brief After the user enters what question to answer the question is accessed

 *

 *  @param choice is the paramter that is used to access the question

 *  @return returns a int choice

 */


int LinkedLists::getAttempt(int choice)
{
	if (choice == 1) {
		question2(choice);
	}
	else if (choice == 2) {
		question2(choice);
	}
	else if (choice == 3) {
		question2(choice);
	}
	return choice;
}


/** @brief User enters the input of what question they want to solve

 *

 *  @param int choice to access the choice and print choice

 *  @return returns a int choice

 */


void LinkedLists::question2(int choice)
{
	std::string userResponse1;

	int option;
	std::cout << "Do you want any hints before stating? 1 = Yes, 2 = No\n"
		<< "=> ";
	std::cin >> option;
	std::string userResponse[14];

	switch (choice)
	{
	case 1:
		if (choice == 1 && option == 1) {
			std::cout << "Hint for 1: " << "Use the contains method in Java" << "Use the next method\n" << "Use if else"
				<< "Dont forget the brackets\n";
			// McDowell, G. L. (2015). Cracking the coding interview 6th edition: 189 programming questions and solutions. CareerCup. 
			std::string question1[4] = {"void deleteDups(LinkedListNode n){", "HashSet<Integer> set = new HashSet<Integer>();", "LinkedListListNode previous = null",
			"while (n!= null){"};
			for (int i = 0; i < 4; i++)
			{
				std::cout << question1[i] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 9; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 9; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		else if (choice == 2 && option == 1)
		{
			std::cout << "Hint for 2\n"
				<< "Declared int index and return index\n "
				<< "Use another if statement\n";
			std::string question2[5] = {"int printKthToLast(LinkedListNode head, int k{", "if(head == null){",
			"return 0;", "}"};
			for (int i = 0; i < 5; i++)
			{
				std::cout << question2[i] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 7; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 7; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		else if (choice == 3 && option == 1)
		{
			std::cout << "Hint for 3\n"
				<< "Use the next function in Java\n"
				<< "declare another boolean function\n"
				<< "return a head and return one == null && two == null;\n"
				<< "Declare a LinkedListNode one and two in new bool function\n";
			std::string question3[8] = { "boolean isPalindrome(LinkedListNode head) {", "LinkedListNode reversed = reverseAndClone(head);"
			"return isEqual(head, reversed);", "}", "LinkedListNode reverseAndClone(LinkedListNode node) {", "LinkedListNode head = null;",
			"while (node !=null {", "LinkedListNode n = new LinkedListNode(node.data); // Clone", "n.next = head" };
			for (int i = 0; i < 8; i++)
			{
				std::cout << question3[i] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 15; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 15; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		break;
	case 2:
		if (choice == 1)
		{
			std::string question1[5] = { "void deleteDups(LinkedListNode n){", "HashSet<Integer> set = new HashSet<Integer>();", "LinkedListListNode previous = null",
			"while (n!= null){" };
			for (int i = 0; i < 5; i++)
			{
				std::cout << question1[i] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 9; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 9; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		else if (choice == 2)
		{
			std::string question2[5] = { "int printKthToLast(LinkedListNode head, int k{", "if(head == null){",
		"return 0;", "}" };
			for (int i = 0; i < 5; i++)
			{
				std::cout << question2[i] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 7; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 7; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		else if (choice == 3)
		{
			//McDowell, G.L. (2015).Cracking the coding interview 6th edition : 189 programming questions and solutions.CareerCup.
			std::string question3[8] = { "boolean isPalindrome(LinkedListNode head) {", "LinkedListNode reversed = reverseAndClone(head);"
			"return isEqual(head, reversed);", " }", "LinkedListNode reverseAndClone(LinkedListNode node) {", "LinkedListNode head = null;",
			"while (node !=null {", "LinkedListNode n = new LinkedListNode(node.data); // Clone", "n.next = head" };
			for (int i = 0; i < 8; i++)
			{
				std::cout << question3[i] << "\n";
			}
			std::cout << "Enter response here: ";
			for (int i = 0; i < 15; i++) {
				std::cin >> userResponse[i];
			}
			std::cout << "This is your response to the question\n";
			for (int n = 0; n < 15; ++n) {
				std::cout << userResponse[n] << "\n";
			}
		}
		break;
	default:
		std::cout << "Invalid input";
	}
}
