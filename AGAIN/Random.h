#ifndef RANDOM_H
#define RANDOM_H

class Rand
{
public:
	int virtual GetResult() { return 0; }
	/*int randomNumber();
	int randOperation();
	int randombracket();*/
};
class randomNumber:public Rand
{
public:
	int GetResult();
};
class randOperation :public Rand
{
public:
	int GetResult();
};
class randombracket :public Rand
{
public:
	int GetResult();
};

#endif // !RANDOM_H
