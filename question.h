#pragma once
#include <iostream>
#include <time.h>
#include <crtdbg.h>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <chrono>
using namespace std;
class question
{
public:
	//int questionNumber();
	int getOperandOne();
	int getOperandTwo();


private:
	int operandOne, operandTwo;
};

