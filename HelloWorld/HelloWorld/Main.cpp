#include <iostream>
/*The include is essentially a header that we are calling*/
/*The io stream is another way of specifing this as an exe file*/

void log(const char* message);

/*tThis essentially calls a function that was created in a separate cpp file within the same project with the same parameters*/
int main()
/*This is whats known as an entry point*/
/*int is not inreference to making this an integer it's a special case of creating a main cpp file*/
{
	log("Hello World");
	std::cin.get();
}