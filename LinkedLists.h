#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H
#include <iostream>

#include "ArraysAndString.h"
//LO1.Designand implement a class.

class LinkedLists : public ArraysAndString1
{
private:
	// LO6. Use object-oriented encapsulation mechanisms such as interfaces and private members.
	int choice;
	int option;
	int question;
public:
	// Default Constructor
	LinkedLists();

	virtual void setOption(int o);
	virtual int getOption(int option);
	void setQuestion(int question)
	{
		this->question = question;
	}
	virtual int getQuestion(int question);


	void SetLinkedLists(int* choice)
	{
		this->choice = *choice;
	}
	// LO3. Correctly reason about control flow in a program using dynamic dispatch. 
	virtual int getAttempt(int choice);
	void question2(int choice);
	// LO3. Correctly reason about control flow in a program using dynamic dispatch. 
	virtual int getAnswer(int answer);


};



#endif // LINKEDLISTS_H
