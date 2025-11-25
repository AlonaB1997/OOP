#pragma once


class Fraction
{
private:
	int numerator, denominator;
	float fraction;
public:
	void setNumerator();
	void setDenominator();
	float getFraction();
	float getSum(Fraction& fraction1, Fraction& fraction2);
	float getSubtraction(Fraction& fraction1, Fraction& fraction2);
	float getMultiplication(Fraction& fraction1, Fraction& fraction2);
	float getDivision(Fraction& fraction1, Fraction& fraction2);
};

