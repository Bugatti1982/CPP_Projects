#include <iostream>

class Logmessage
{
public:
	enum Level
	{
		levelerror = 0, levelwarning, levelinfo
		//Enum essentially increments each variable set by adding 1 starting at 0
	};
	//You can use public and private multiple times
	//It's typically optimal to organize your variables from your functions to make things more readable
private:
	Level m_loglevel = levelinfo;
	//You will need this to be private because the is no need for this to be called or manipulated outside of the class in the future for this example
	//Why it's set to be equal to loglevelinfo is to display all the information after being printed
public:
	void setlevel(Level level)
	{
		m_loglevel = level;
	}


	void error(const char* message)
	{
		if (m_loglevel >= levelerror)
			//All these if statements within this class must be using the >= operator because that is just in case we want to call info as well to print something
			//However you can be more specific with the conditionals, this is just to see if all the conditinals work accordingly
			std::cout << "[ERROR]" << message << std::endl;
	}
	void warn(const char* message)
	{
		if (m_loglevel >= levelwarning)
			std::cout << "[WARNING]" << message << std::endl;
	}
	void info(const char* message)
	{
		if (m_loglevel >= levelinfo)
			std::cout << "[INFO]" << message << std::endl;
	}
};




//Original Version
//----------------
//class Logmessage
//{
//public:
//	const int loglevelerror = 0;
//	const int loglevelwarning = 1;
//	const int loglevelinfo = 2;
//	//You can use public and private multiple times
//	//It's typically optimal to organize your variables from your functions to make things more readable
//	//It Should be worth noting that you can only use int main() function once for each C++ PROJECT
//private:
//	int m_loglevel = loglevelinfo;
//	//You will need this to be private because the is no need for this to be called or manipulated outside of the class in the future for this example
//	//Why it's set to be equal to loglevelinfo is to display all the information after being printed
//public:
//	void setlevel(int level)
//	{
//		m_loglevel = level;
//	}
//
//
//	void error(const char* message)
//	{
//		if (m_loglevel >= loglevelerror)
//			//All these if statements within this class must be using the >= operator because that is just in case we want to call info as well to print something
//			//However you can be more specific with the conditionals, this is just to see if all the conditinals work accordingly
//			std::cout << "[ERROR]" << message << std::endl;
//	}
//	void warn(const char* message)
//	{
//		if (m_loglevel >= loglevelwarning)
//			std::cout << "[WARNING]" << message << std::endl;
//	}
//	void info(const char* message)
//	{
//		if (m_loglevel >= loglevelinfo)
//			std::cout << "[INFO]" << message << std::endl;
//	}
//};
//------------
