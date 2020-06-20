#include "Study.h"
MyNums::MyNums(int num)
{
	m_nums = num;
	std::cout << "MyNums构造函数" << std::endl;
}

MyNums::~MyNums()
{
	cout << "MyNums的析构函数" << endl;
}

void MyNums::operator++()
{
	cout << "MyNums的operator++()" << endl;
	m_nums++;
}

void MyNums::operator++(int num)
{
	cout << "MyNums的operator++(int num)" << endl;
	cout << "num is " << num << endl;
	m_nums++;
}
void MyNums::operator+(int num)
{
	cout << "MyNums的operator+(int num)" << endl;
	cout << "num is " << num << endl;
	m_nums += num;
}void MyNums::ShowNums()
{
	std::cout << "m_nums is " << m_nums << std::endl;
}

MyString::MyString()
{
	cout << "MyString的构造函数" << endl;
}

MyString::~MyString()
{
	cout << "m_str为" << m_str << endl << "MyString析构函数" << endl;
}

void setMyString(MyString & mystring, string s)
{
	mystring.m_str = s;
}

void test01(int a, bool n)
{
	cout << "test01" << endl;
}

void test01(int a, int b, bool n)
{
	cout << "test02" << endl;
}

void test01(int a, int b, int c, bool n)
{
	cout << "test03" << endl;
}
