*What are pointers and how to use them*
			Pointers are variables that store memory addresses of other variables. They allow for direct memory manipulation, dynamic memory allocation, and efficient data handling. 
			-Key Operations-:
						Address-of Operator (&): Gets the memory address of a variable
						Dereference Operator (*): Accesses the value at a pointer's address
			-Pointer Pitfalls-:
						Uninitialized pointers can cause segmentation faults
						Memory leaks if dynamic memory isn't properly freed
						Potential for buffer overflows and security vulnerabilities
			-Best Practices-:
						+Always initialize pointers : They contain random memory addresses, which can cause:
														-Segmentation faults
														-Unexpected program crashes
						+Check for NULL before dereferencing:
						+Free dynamically allocated memory:
*Double pointers*
			A pointer to a pointer is a variable that stores the memory address of another pointer. It's declared using two asterisks (**).
			int x = 42;
			int *ptr = &x;     // ptr holds the address of x
			int **pptr = &ptr; // pptr holds the address of ptr

			// Three ways to access the value
			printf("%d\n", x);     // Direct: 42
			printf("%d\n", *ptr);  // Through first pointer: 42
			printf("%d\n", **pptr);// Through pointer to pointer: 42

			// Modifying through different levels
			**pptr = 100;  // Changes x to 100
	
