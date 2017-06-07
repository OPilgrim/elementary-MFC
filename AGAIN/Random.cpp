#include<iostream>
#include"Random.h"
using namespace std;

int randomNumber::GetResult()
{
	return rand() % 10 + 1;
}
int randOperation::GetResult()
{
	return rand() % 4 + 1;
}
int randombracket::GetResult()
{
	return rand() % 6 + 1;
}
