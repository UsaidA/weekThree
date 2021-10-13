#include "question.h"

//int question::questionNumber(){
//	int firstQuestion = 1;
//	for (int i = 1; i < 21; i++) {
//		firstQuestion += 1;
//	}
//	return firstQuestion;
//
//}

int question::getOperandOne() {
	srand((int)time(NULL));
	operandOne = (rand() % 20) +1 ;
	return operandOne;

}

int question::getOperandTwo() {
	
	operandTwo = ((rand() % 10)+1 ) + ((rand() % 10) + 1);
	return operandTwo;

}