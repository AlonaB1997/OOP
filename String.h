#pragma once

const int LENGTH = 80;

class String
{
private:
	char* content;
	size_t length;
	static int count;

public:
	String();
	String(size_t length1);
	String(const char*);
	~String();
	void input();
	void print();
	int getCount();
};

