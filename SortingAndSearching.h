#ifndef SORTINGANDSEARCHING_H
#define SORTINGANDSEARCHING_H

#include "ArraysAndString.h"

class SortingAndSearching : public ArraysAndString
{
private:
	int option;
public:
	//Default Constructor
	SortingAndSearching();
	virtual void setOption();
	virtual int getOption(int option);

	void setAttempt(int* attempt);
	virtual int getAttempt(int choice);


	virtual int getChoice(int choice)
	{
		if (choice == 1)
		{
			std::cout << "Sorted Merge: You are given two sorted arrays, A and B, where A has a large enough buffer at"
				<< "the end to hold B. Wrote a method a merge B into A in sorted order";
		}

		return choice;
	}


};

#endif //SORTINGANDSEARCHING_H