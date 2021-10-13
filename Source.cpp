#include <iostream>
#include <time.h>
#include <crtdbg.h>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <chrono>
#include "question.h"

using namespace std;

int main()
{
	cout << "Welcome to Twenty Question\n==============================\nTwenty random addition or subtraction questions with operands between 1 and 20.\nHow many can you get right?";
	question questions;
	int questionNumber = 1;
	int userAnswers[19];
	for (int i = 0; i < 20; i++) {
		
		
		cout << "\nQuestion " << +questionNumber << +":	" << +questions.getOperandOne() << + "+ " << questions.getOperandTwo() << " = ";
		cin >> userAnswers[i];

		questionNumber += 1;
		
	}


	return questionNumber;

	
	

	return 0;
}
