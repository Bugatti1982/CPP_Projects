#include <iostream>
#include "Log.h"

int Multiply(int aa, int bb)
{
	return aa * bb;
}

void MultiplyAndLog(int aaa, int bbb)
{
	int result = Multiply(aaa, bbb);
	std::cout << result << std::endl;
}
// void essentially doesn't return anything, it just executes the function itself
//both of these two functions above must be specified in order for the code to work


int main()
{
	char a = 50;
	std::cout << a << std::endl;
	//Returns the number of characters
	float b = 5.5f;
	std::cout << b << std::endl;
	double c = 5.5f;
	std::cout << c << std::endl;
	bool d = true;
	std::cout << d << std::endl;
	//we return a 1 in this because bool is bianary meaning it can output only 1 or 0, true or false
	bool e = true;
	std::cout << sizeof(bool) << std::endl;
	//we can also see the size of how much the variable is making by using "sizeof()"
	unsigned int variable = 8;
	std::cout << variable << std::endl;
	// To establish a variable, it must be within a range of 4bytes or +- 2billion
	//a varable must be defined by a corresponding data type	
	
	// an "unsigned" variable can extend the data limit of an integer that is stored by not assigning a sign og any kind
	//it's basically just storing the number itself
	
	//the other varable types to chose from are char, long, long long, int, and short
	variable = 20;
	std::cout << variable << std::endl;

	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(90, 45);

	InitLog();
	log("Hello World");

	int x = 5;
	bool comparisonResult = x == 5;
	if (comparisonResult)
	{
		log("Bababooey");
	}
	
	// Can also be written like this:

	int g = 5;
	if (g == 5)
	{
		log("Hello World");
	}

	// You can also use if statements for defining something as null or not in this example:

	const char* ptr = "Hello";
	if (ptr)
		log(ptr);
	else if (ptr == "Hello")
		log("Ptr is Hello");
	else
		log("Ptr is null");


	for (int i = 0; i < 5; i++)
	{
		log("bababooey XD");
	}

	
	// In a for loop you will need a variable declaration, a conditional statement, and code that will be run before the next loop
	// i++ is the same as saying  i = i + 1 or i += 1
	// Meaning we will add 1 everytime it's ran in the for loop

	int h = 0;
	bool condition = true;
	for (; condition; )
	{
		log("bababooey :P");
		h++;
		if (!(h < 5))
			condition = false;
	}

	//Alternatively, you can have all the parts of a for loop be in different areas as long as a semicolon is used inside the curly brackets.

	int i = 0;
	while (i < 5)
	{
		log("bababooey ;D");
		i++;
	}

	// To achive the same level of loops from the for loop using the i variable it can be written like this
	
	// The main difference between a while loop and a for loop is:
	// A for loop can be used to loop a finite amount of times
	// A while loop can run as long as possible until the conditional statement is fulfilled

	do
	{
		log("bababooey >:(");
	} while (i < 5);

	// Essentially a do while loop regardless on whether the condition is true or not will only pass through once.
	//This isn't as important to know but it's worth knowing anyways

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			continue;
		log("bababooey ;)");
		std::cout << i << std::endl;
	}

	// Couple things to note with this for loop is we can use the continue command to include further conditionals to be added
	// The % operator is used to return the remainded after division also known as modulo
	// The cout statement shows us what values it's returning after completing the loop

	for (int i = 0; i < 5; i++)
	{
		if ((i + 1) % 2 == 0)
			continue;
		log("bababooey :O");
		std::cout << i << std::endl;
	}

	// This now outputs even numbers instead of odd starting at 0

	for (int i = 0; i < 5; i++)
	{
		if ((i + 1) % 2 == 0)
			break;
		log("bababooey ;P");
		std::cout << i << std::endl;
	}

	// With break it essentially breaks the entire loop
	// This is only looped once because of the break

	// keep in mind that "return 0" will exit the function and can be a substitute for the "std::cin.get();" statement
	// just like continue and break it could be used anywhere in the code
	std::cin.get();
}