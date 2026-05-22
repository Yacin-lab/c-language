
BASICS
---
				✔️• Learn syntax, compilation, variables, types, operators.
				✔️• Use printf and scanf.
				
🔻 C Program Structure:
---
		- Header File is in Compiler Path:			#include <filename.h>
		- Header File is in Project Directory:		#include "filename.h"
			 header file <= just prototypes
										  
		- Preprocessor Directives
			#include <stdio.h>		
			This line tells the compiler to include external libraries before building the program.
			<stdio.h> = Standard Input/Output Header
			
		- printf("Hello\n");
		  A statement is a single instruction ending with a semicolon.
		  
		  - Macros	→exampl:		#define PI 3.14159
🔻 Compiling a C program:
---
		⚠️​ There are four phases for a C program to become an executable:
			- Pre-processing		→Preprocessing expands macros and includes header files.
      
			- Compilation			→Compilation generates assembly code from your C source file.
									                      (main.c → main.s)
			- Assembly				→The assembler converts assembly code into machine code.
									                      (main.s → main.o)
			- Linking				→Linking combines all object files and libraries into the final executable.	
									                (main.o + printf.o + other libs → a.out)
												
		Compilation takes your C code, preprocesses it, checks it,
		turns it into machine code, links it with libraries, and produces an executable program.
		(compiler like gcc)	gcc = GNU Compiler Collection
🔻 Primary Data Types:
---
		Fundamental Types:		-Integer		-Floating		-Character
		Derived Types:			-Arrays			-Pointers		-Structures		-Enums

	Data types define what kind of data a variable can store, how much memory it uses, and what
	operations are allowed.
		Constants:	#define PI 3.14			<-- #define creates a constant by replacing text before compilation.
										                        (no type, no checked by compiler)
					const int SIZE = 10;	<-- const creates a typed constant that cannot be changed.
										                                  (read-only)
		Data Types:
          			int4			bytes
					short			2bytes
					long			8bytes		
					
					float			4bytes
					double			8bytes	(double offers higher precision than float)
					long double		12byte	(long double provides even more precision)	
					
					char			1byte	(max 127 = 1byte)
					string		    A C-string is an array of chars ending with a null terminator.
					Pointer		    A pointer stores the memory address of another variable.
					
					🔥​ unsigned, removes negative values and doubles the positive range.
					
					🔥​ enum,	Let you create your own list of constants
						enum Lett {A, B, C};			==> A = 0,	B = 1,	C = 2;
						 I can change the values par default
						enum Lett {A = 4, B, C = 9};	==> B = A + 1
					
					🔥 Structure,	A struct groups multiple variables together under one unit.
						exp:		struct  Student {		<==	new type (student)	
								    int		age;
								    char	initial;
								    };
						how to use ==>	struct Student s1;
										s1.age = 20;
										s1.initial = 'Y';
                            
					🔥 union,	A union stores different data types in the same memory location,
							but only one member is valid at a time.
							exp:		union Data {
									    int		x;
									    char 	c;
									    };
						how to use ==>	union Data d;

										d.x = 10;
										printf("%d\n", d.x);
											
										d.c = 'A';		    // overwrites x because same memory
🔻 Inputs and Outputs functions:
---
		I/O functions allow a C program to read input and print output.
		
		- We have two I/O Libraries in C:
			<stdio.h>		👈​ high-level I/O
				printf();  scanf();  putchar();  getchar();  puts(); (Print a String with a Newline)
				fgets();

			<unistd.h>		👈 low-level system I/O
				write();  read();
				
				write(1, &c, 1);		// write sends raw bytes to an output file descriptor.
				first argument = file descriptor
				tow argument   = pointer to data
				three argument = number of bytes
				
				read(0, buf, 10);		// read reads raw bytes from an input file descriptor.
				( 0 = stdin )
			
			🔥 Buffering:	stdio is buffered, write() is unbuffered.
			🔥 File Descriptors:	File descriptors are integer IDs for input/output channels.
				streams:
				0 → stdin       (keyboard)
				1 → stdout      (the screen)
				2 → stderr      (the screen)
				Separating input, output, and errors makes programs more flexible and easier to debug.
🔻 Arithmetic in C:
---
		Arithmetic operators perform basic math. Integer division drops decimals.
		
		- Arithmetic operators:	+ add,	- subtract,	* multiply,	/ divide,	% modulo (rest)
			
		- Typecasting:	explicit conversion example,	float x = (float)5 / 2;		// output,  2.5

✔️ Projects_00	→	calculator
---
➡️ [Open the Project](https://github.com/Yacin-lab/c-language/tree/main/mini-projects/project-00-calculator)
