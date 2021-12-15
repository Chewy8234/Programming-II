#ifndef SORTINGANDSEARCHING_H
#define SORTINGANDSEARCHING_H

#include "LinkedLists.h"

class SortingAndSearching : public LinkedLists
{
private:
	int option;
	int question;
	int m_answer;
public:
	//Default Constructor
	SortingAndSearching();
	virtual void setOption(int o);
	virtual int getOption(int option);

	virtual void setQuestion(int question);

	int getQuestion(int question);

	void setAttempt(int* attempt);
	virtual int getAttempt(int choice);
	virtual void setAnswer(int answer);
	virtual int getAnswer(int answer);
	void Sortquestion(int choice);


};

#endif //SORTINGANDSEARCHING_H