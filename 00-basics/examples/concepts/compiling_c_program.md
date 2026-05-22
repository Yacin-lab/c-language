# 🔻 Compiling a C program:
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