#include <iostream>
#include "Student.h"

int main()
{
	try
	{
		Student s1("Jeff Bezos", 12);
		Student s2("Bill Gates", -5);
		Student s3("Steve Jobs", 9);
	}
	catch (const char* err)
	{
		std::cout << err << std::endl;
	}
	return 0;
}