
#include <iostream>
#include "Static.h"
#include "Shape.h"


#define LOG(x) std::cout << x << std::endl; //宏

void LogPrintf();

void add(int value) 
{
	value++;
}

void add1(int& value)
{
	value++;
}

void add2(int* value)
{
	(*value)++;
}

class test 
{
public:
	int a = 10;
	static int b;
	
	test() { b++; }

	int fun() { return b; }

};

int test::b = 100;


class Log
{

	//变量私有  函数和其他模块公有

public:

	enum e_state
	{
		error = 0,
		waring,
		info
	};

private:

	e_state m_Level = info;

public:
	void SetLevel(e_state level)
	{
		m_Level = level;
	}


	void StatePrint() 
	{
	
		switch (m_Level)
		{
		case Log::error:
			std::cout << "Error"<<std::endl;
			break;
		case Log::waring:
			std::cout << "Waring" << std::endl;
			break;
		case Log::info:
			std::cout << "Info" << std::endl;
			break;
		default:
			break;
		}
	
	}


};

int main() 
{
	//指针

	//int var = 8;
	//int* ptr = nullptr;
	//ptr = &var; 
	//*ptr = 10;
	//log(*ptr);
	//log(var);

	//char* buffer = new char[8];
	//memset(buffer, 0, 8);

	//char** prr1 = &buffer;

	//delete[] buffer;



	//引用
	//int a = 1;
	//add(a);
	//std::cout << a << std::endl;

	//add1(a);
	//std::cout << a << std::endl;

	//add2(&a);
	//std::cout << a << std::endl;

	test t;

	std::cout << t.fun() << std::endl;

	LogPrintf();


	Log log;
	log.SetLevel(log.info);
	log.StatePrint();
	
	Shape box;
	std::cout<<box.Area(6, 5)<<std::endl;





	std::cin.get();
}