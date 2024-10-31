#include "libft.h"

/*
void ft(int x)
{
	printf("x : %d\n", x);
}


double add(double x, double y)
{
	return x + y;
}
int main()
{

	// here we used the * operator to declare the function pointer}
	void (*function_pointer)(int); //the variable name is function pointer;
		// and it is a pointer to a function that gonna have a void return value
				// and it is gonna aceept a single int argument

	//a variable that is a pointer to a function
	// we can now set function pointer to point to the function ft;
	function_pointer = &ft;
						// we got the memory address of this function;	
	// now the function_pointer stores the memory address of "ft";

	//we can use the function_pointer to call the ft;
	(*function_pointer)(4);
	// now we are using the * operator in a different way 
	// here is used to derefenrence the function pointer
	// and we are accessing the function and we are calling it with the argument 4

	double (*ft_add)(double, double); // a pointer to a function that accept 2 doubles as an arguement
	ft_add = &add; // we can use add and we add
	(*ft_add)(4,2);
	printf("%f", add(4,2));


}
*/
// wecan have arrays of pointers to functions
	int sub(int x, int y)
	{
		return (x - y);
	}
	int mul(int x, int y)
	{
		return (x * y);
	}
int main()
{
	int (*array[])(int, int)= {sub,mul};; // declaring an array of pointers to functions that
							//accept 2 int argument and return an int value called array
	
	int product = (*array[0])(2, 10); // array at index 0 is a pointer to sub function
								//
	printf("%d\n", product);
}

//2 more useful things we can do with pointers to function;
// is ''create function that themselves return a pointer to a function''
// or we ''can creat functions that accept as an argument a pointer to a function''

