/*The #if function allows us to to include or exclude code*/
/*If we define #if as 1, it will return the code, if it is 0 it hides the code*/

/*preprocessing allows you to view the usage of headers in file form*/
/*should only be used for checking since it does not store the code in an obj fiel which is critical for any project*/

/*The #define function allows you to change the name of a datatype to any text*/

const char* log(const char* message)
{
	return message;
}


int Multiply(int a, int b)
{
	log("Multiply");
	return a * b;
}


/*The #include directly pulls whatever was written from a header file and adds it to this code*/
