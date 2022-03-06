#include <iostream>
using namespace std;

int isItPrime(int number);


void main()
{
	int primeNum = 13;
	int index = 6;
	int indexGoal = 10001;

	for (;index < indexGoal;index++)
	{
		do
		{
			primeNum = primeNum + 2; // the only prime that is even is 2 so we can jump 2 every loop
		} while (isItPrime(primeNum) == 0);
	}

	cout << primeNum;
}

int isItPrime(int number)
{
	for (int a = 2; pow(a,2) <= number; a++) //every prime number div only with 1 and himself so a*a is a way to shorten the loop
	{
		if (number % a == 0) //the check if it's div with the num or not
			return 0;
	}

	return 1; //the number is prime
}