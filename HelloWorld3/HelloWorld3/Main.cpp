#include <iostream>
#include "Log.cpp"
#define LOG(x) std::cout << x << std::endl;

void Increment(int& value)
{
	value++;
}
//We could instead of passing 2 for the value, we can reference it in memory using this function in line 46 and achive the same result
//By declaring value as a reference, there's no need to dereference buy using (value)++;  and defining value as a pointer

class Player
	//A class essentially makes management of variables of a similar data type easier to organize
	
{
public:
	//By default when setting a class it will originally be set to private in terms of visibility
	//In this example we will need it to be public so that we can directly manipulate the variables
	int x, y;
	int speed;

	void move(int xa, int ya)
		//The first part of the paramenter will need to be a reference because it will need to be modified later and is less combersome by using a pointer
		//Both xa and ya are refering to the amount
	{
		x += xa * speed;
		//player.x is the current position of the object
		//xa is the amount of direction
		//player.speed is the speed
		y += ya * speed;
		//We need to use the += operator in this example because we want to add direction and speed from the object's current position

	}
};
//Alternatively we can simplify the code further by adding the funtion to the class to get rid of the player.x or player.speed references
//Moreover, we don't need to use "Player& player" as the first paramenter in the move function since it's already defined

struct Vec2
	//There is essentially little difference between a struct and a class except for how they default
	//Unlike a class, by default, structs are publically available straight away
	//However you can set structs to remain private the same way you would with classes
	//It's optimal to use structs for defining a bunch of variables and use classes when you have a multitude to functions and variables that all will need to be inherited
{
	float x, y;
	//Float is a datatype that can hold up to 7 digits
	//It's a simplified interpretation of double
	void add(const Vec2& other)
	{
		x += other.x;
		y += other.y;
	}
};

class entity
{
public:
	float X, Y;

	entity()
	{
		X = 0.0f;
		Y = 0.0f;

		std::cout << "ALWAYS NAYSAYING EVERYTHING I CREATE!!" << std::endl;
	}
	
	//entity(float x, float y)
	////This is known as a constructor
	////A constructor can typically be used to initialize a created object within a class
	////Like functions, a constructor can take parameters as well
	//{
	//	
	//	X = x;
	//	// Any number in decimal form followed by f is typically the format you should use if you need to define 0 in a float
	//	// Ex: 10.0f, 5.5f
	//	Y = y;
	//}

	~entity()
	//This is a destructor
	//A destructor essentially cancels out what's in a constructor
	{
		std::cout << "Danger Mr. Robinson DESTROY!!" << std::endl;
	}
	
	void print()
	{
		std::cout << X << " , " << Y << std::endl;
	}
};

void function()
{
	entity e;
	e.print();
}



class entity2
{
public:
	float x, y;

	void move(float xa, float ya)
	{
		x += xa;
		// Remember += is another way of saying  x = x + xa
		y = ya;
	}
};

class Player1 : public entity2
	//This is known as inheritence
	//This essentially copies all the same code from a class so that it can be called in a new class
	//However it does not copy the public or private settings from the class
	//Though for some reason we need to establish this when we use inheritence
{
public:
	const char* name;

	void printname()
	{
		std::cout << name << std::endl;
	}
};


class entity3
{
public:
	virtual std::string getname()
	//From what I can gather, a virtual function essentially
	{
		return "entity3";
	}
};

class player2 : public entity3
{
private:
	std::string store_name;
public:
	player2(const std::string& name) : store_name(name) {}

	std::string getname()
	{
		return store_name;
	}
};

void printname(entity3* entity3)
{
	std::cout << entity3->getname() << std::endl;
}

int main()
{
	int var = 8;
	//The "&var" is whats known as a pointer
	// You can essentially use it to store a variable in another variable
	//Keep in mind that regardless of data type a pointer is always stored as an integer in memory
	void* ptr = &var;
	//Remember that the * after a void means that we are creating a pointer as a reference point
	int* ptr1 = &var;
	*ptr1 = 10;
	LOG(var);
	//Because we can't reference a pointer in a void, we change it to an int instead for this example
	//Now we have successfully changed the data from 8 to 10 by using pointers



	char* buffer =  new char[8];
	//We can use this method to allocate new unknown data to be stored
	//This means that we are creating 8 bytes of memory to be used and also creating a pointer
	memset(buffer, 0, 8);
	//Buffer is declared as the reference for the pointer
	// 0 is the value
	// 8 is the amount of bytes to fill
	//If we go to debug mode in memory we can see that there are 8 pairs of 0's stored by using "buffer" in the address search
	char** ptr2 = &buffer;
	//You can also create pointers using existing pointers as well
	delete[] buffer;
	//The delete[] of course clears out this new allocation that was just created



	int a = 5;
	int& ref = a;
	// The "&" for "int" is not a dereference like a pointer, it's simply a data type to define a reference
	// A reference is essentially an alias defined from a variable
	ref = 2;
	Increment(a);
	LOG(a);
	//We can now see that 2 is now changed to 3

	int b = 5;
	int c = 8;
	int& ref1 = b;
	ref1 = c;
	LOG(b);
	LOG(c);
	// One important note is If we to writ our code like this, we essentially change the value of b to be 8 and nothing is changed for c
	// ie. b = 8 and c = 8

	int* ref2 = &b;
	//To fix this problem, instead of referencing, we are pointing to the variables first and then be able to change both by dereferencing
	*ref2 = 2;
	ref2 = &c;
	*ref2 = 1;
	LOG(b);
	LOG(c);


	Player player;
	player.move( -25, 2);
	//By simplifying the Player class, instead of saying "move(player, -25, 2);" it's "player.move(-25, 2)" with the parameters being simpler than the original
	
	
	Logmessage logmessage;
	logmessage.setlevel(logmessage.levelerror);
	//This statment filters info from ever being called because it is set to private
	//If you remove this statement and call info, it gets printed
	logmessage.warn("You got warning");
	logmessage.info("Yo dudes");
	logmessage.error("The Empire's pretty chill");

	function();
	//This function essentially prints both the constructor and destructor along with the x and y variables
	//Keep in mind that a constructor intializes the class to be stored in memory
	// A destructor closes the class and clears the memory



	std::cout << sizeof(entity2) << std::endl;
	std::cout << sizeof(Player) << std::endl;
	//Sizeof shows the number of bytes used to initialize the code
	
	Player1 player1;
	player1.move(5, 4);
	player1.x = 2;


	entity3* e = new entity3();
	std::cout << e->getname() << std::endl;

	player2* p = new player2("Bababooey");
	std::cout << p->getname() << std::endl;
	printname(p);

	std::cin.get();
}