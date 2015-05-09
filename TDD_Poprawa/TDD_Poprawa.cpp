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
	uint64_t publicCheckGreatness(uint64_t largestProduct, uint64_t product)
	{
		return checkGreatness(largestProduct, product);
	}
	//////////////////////////////////////////////
private:
	const string Number;
	uint64_t largestProduct;
	int print();
	uint64_t multiplyNumbers(int i, uint64_t product);
	uint64_t checkGreatness(uint64_t largestProduct, uint64_t product);
	uint64_t followMainLoop();
};

int main(int argc, _TCHAR* argv[])
{
	return 0;
}

int LargestProduct::run()
{
	return 1;
}

LargestProduct::LargestProduct() : Number("7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450")
{
	largestProduct = 0;
}

LargestProduct::~LargestProduct()
{
}

/*
# Private: Function is checking witch of two number is greater
#
# largestProduct - Actual or previous greatest number
# product - product of 13 number, waiting to be check with largestProduct
#
# Examples
#
#   checkGreatness(999, 111)
#   # => 999
#
#	checkGreatness(555, 777)
#   # => 777
#
# Returns the actual largestProduct
*/
uint64_t LargestProduct::checkGreatness(uint64_t largestProduct, uint64_t product)
{
	if (product > largestProduct)
		largestProduct = product;
	return largestProduct;
}