# 🔻 Inputs and Outputs functions:
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