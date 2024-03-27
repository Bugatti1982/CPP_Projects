#include <iostream>
#include "Log.h"

void InitLog() {
	log("Initializing Log");
}

void log(const char* message)
{
	std::cout << message << std::endl;
}
// here are a coulple of functions that borrow the log.h file and create parameters to be called in the main cpp