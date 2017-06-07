#include"SimpleFactory.h"
#include"Random.h"
#include<iostream>
using namespace std;

Rand* SimpleFactory::CreateOpeartor(int ch)
{
	{
		Rand * p=NULL;
		switch (ch)
		{
		case 1:
			p = new randomNumber();
			break;
		case 2:
			p = new randOperation();
			break;
		case 3:
			p = new randombracket();
			break;
		}
		return p;
	}
}