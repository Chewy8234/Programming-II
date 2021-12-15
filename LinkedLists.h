#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H
#include <iostream>



class LinkedLists 
{
private:
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
	virtual int getAttempt(int choice);
	void question2(int choice);
	virtual int getAnswer(int answer);


};



#endif // LINKEDLISTS_H
