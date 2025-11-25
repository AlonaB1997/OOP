#include "Fraction.h"
#include <iostream>
using namespace std;



void Fraction::setNumerator()
{
	int numerator1;
	cout << "Enter numerator: ";
	cin >> numerator1;
	numerator = numerator1;
}

void Fraction::setDenominator()
{
	int denominator1;
	do
	{
		cout << "Enter denominator (not zero): ";
		cin >> denominator1;
		denominator = denominator1;
		if (denominator1 == 0)
		{
			cout << "Denominator cannot be zero! Try again." << endl;
		}
	} while (denominator1 == 0);
}

float Fraction::getFraction()
{
	return static_cast<float>(numerator) / denominator;
}

float Fraction::getSum(Fraction& fraction1, Fraction& fraction2)
{	
	return fraction1.getFraction() + fraction2.getFraction();
}

float Fraction::getSubtraction(Fraction& fraction1, Fraction& fraction2)
{
	return fraction1.getFraction() - fraction2.getFraction();
}

float Fraction::getMultiplication(Fraction& fraction1, Fraction& fraction2)
{
	return fraction1.getFraction() * fraction2.getFraction();
}

float Fraction::getDivision(Fraction& fraction1, Fraction& fraction2)
{
	if (fraction2.getFraction() != 0)
	{
		return fraction1.getFraction() / fraction2.getFraction();
	}
	else
	{
		cout << "Division is not possible, second fraction is zero!" << endl;
		return -1;
	}
}


int main()
{
	Fraction fraction1, fraction2;
	cout << "Enter numerator and denominator for fraction 1: " << endl;
	fraction1.setNumerator();
	fraction1.setDenominator();

	cout << "Enter numerator and denominator for fraction 2: " << endl;
	fraction2.setNumerator();
	fraction2.setDenominator();

	cout << "Sum of fractions " << fraction1.getFraction() << " and " << fraction2.getFraction() << ": " << fraction1.getSum(fraction1, fraction2) << endl;
	cout << "Subtraction of fraction " << fraction2.getFraction() << " from " << fraction1.getFraction() << ": " << fraction1.getSubtraction(fraction1, fraction2) << endl;
	cout << "Multiplication of fractions " << fraction1.getFraction() << " and " << fraction2.getFraction() << ": " << fraction1.getMultiplication(fraction1, fraction2) << endl;
	cout << "Division of fraction " << fraction1.getFraction() << " by " << fraction2.getFraction() << ": " << fraction1.getDivision(fraction1, fraction2) << endl;

	return 0;
}