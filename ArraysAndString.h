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
	int question;
	int age;
public:
	// Default Constructor
	ArraysAndString();
	ArraysAndString(std::string name);
	ArraysAndString(std::string name, int age);

	void setName(std::string n);
	std::string getName(std::string n);
	virtual void setOption(int o);
	virtual int getOption(int option);
	void setAge(int a);
	int getAge(int a);
	
	void SetArrayAndString(int choice)
	{
		this->choice = choice;
	}
	void setQuestion(int question);
	virtual int getQuestion(int question);


};


class ArraysAndString1 : public ArraysAndString
{
private:
	int choice;
public:
	void setAttempt(int *attempt);
	virtual int getAttempt(int choice);
	void question(int choice);
	virtual int getAnswer(int answer);
	
};


#endif // ARRAYSLISTANDSTRING_H
