#pragma once
#include <string>
#include <iostream>
#include <queue>
using namespace std;
class MyNums
{
public:
	MyNums(int num);

	~MyNums();
	void operator++();
	void operator++(int num);
	void operator+(int num);
	void ShowNums();
private:
	int m_nums;
};
class MyString
{
public:
	MyString();

	~MyString();
	friend void setMyString(MyString& mystring, string s);
private:
	string m_str;
};

void setMyString(MyString& mystring, string s);

void test01(int a, bool n= 0);

void test01(int a, int b, bool n = false);

void test01(int a, int b, int c, bool n = false);
