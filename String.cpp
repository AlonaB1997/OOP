#include "String.h"
#include <iostream>
using namespace std;


String::String() : String(80) {}

String::String(size_t length1)
{
	content = new char[length1 + 1];
	for (size_t i = 0; i <= length1; i++)
	{
		content[i] = '\0';
	}
	length = length1;
	count++;
}

String::String(const char* content1)
{
	length = strlen(content1);
	content = new char[length + 1];
	strcpy_s(content, length + 1, content1);
	count++;
}

String::~String()
{
	delete[] content;
}

void String::input()
{
	cout << "Enter string: " << endl;
	cin.getline(content, length + 1);

}

void String::print()
{
	cout << "Your string is: " << endl;
	for (size_t i = 0; i <= length; i++)
	{
		cout << content[i];
	}
	cout << endl;

}

int String::getCount()
{
	return count;
}

int String::count = 0;

int main() {

	String S1;
	String S2(30);
	String S3("This is my string #3");
	S1.input();
	S2.input();
	S1.print();
	S2.print();
	S3.print();
	cout << "Count of the strings: " << S1.getCount() << endl;
	return 0;
}
