# 🔻 Primary Data Types:
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