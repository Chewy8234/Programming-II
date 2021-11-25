#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H
#include <iostream>



class LinkedLists 
{
private:
	int choice;
	int option;
public:
	// Default Constructor
	LinkedLists();
	LinkedLists(int userOption);

	virtual void setOption();
	virtual int getOption(int option);

	void SetLinkedLists(int* choice)
	{
		this->choice = *choice;
	}
	virtual int getAttempt(int choice);
	
	virtual int getChoice(int choice)
	{
		if (choice == 1) {
			std::cout << "Write code to remove duplicates from an unsorted linked list";
		}
		else if (choice == 2)
		{
			std::cout << "Implement an algorithm to find the kth to"
				<< "last element of a single linked list";
		}
		else {
			std::cout << "Given a circular linked list, implement an algorithm that returns the node at "
				<< "the beginning of the loop\n"
				<< "Definition\n"
				<< "Circular linked list: A (corrupt) linked list in which a node's next ppinter points to an eariler node, so"
				<< " as to make a loop in the linked list.\n"
				<< "Example\n"
				<< "Input A-> B-> C-> D-> E->C (the same C as eariler)\n"
				<< "Output C";
		}
		return choice;
	}
	
};



#endif // LINKEDLISTS_H
