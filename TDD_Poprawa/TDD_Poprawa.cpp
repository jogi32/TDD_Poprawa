// TDD_Poprawa.cpp : Defines the entry point for the console application.
//

/*
Convention:
- Fields and methods name start with small letter, if name consists of two words, second word starts with large letter
- Methods are private due to the fact that we have one class
- Methods are clear and easy to understand - comments are not necesarry
- Methods are short
*/

//Project tested used basic Microsoft library from VisualStudio2013 -> CppUnitTestFramework
//Library in file CppUnitTest.h
//more info on official Microsoft page


#include "stdafx.h"
#include <string>
#include <iostream>
#include <inttypes.h>

#define sizeProduct 13
using namespace std;
using std::string;

class LargestProduct
{
public:
	int run();
	LargestProduct();
	~LargestProduct();
	//////////////////////////////////////////////
	//Metod added only to test purpose

	//////////////////////////////////////////////
private:
	const string Number;
	uint64_t largestProduct;
	int print();
	uint64_t multiplyNumbers(int i, uint64_t product);
	uint64_t checkGreatness(uint64_t largestProduct, uint64_t product);
	uint64_t followMainLoop();
};

{
	return 0;
}