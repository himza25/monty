Monty Interpreter
Developed by himza25
This project is an interpreter for Monty ByteCodes files. Monty is a scripting language that is first compiled into Monty bytecodes (Just like Python). The files containing Monty bytecodes usually have the .m extension.

Description
This repository contains the source code for a Monty language interpreter written in C, conforming to a set of coding guidelines and requirements.

Compilation
The code files should be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=c89.

How to Compile
bash
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
Usage
After compilation, you can run the program as follows:

bash
Copy code
./monty <filename.m>
File Descriptions
err.c: Contains functions for error handling
err1.c: Contains additional functions for error handling
err2.c: Contains more functions for error handling
instr.c: Main file that handles instruction execution
instr1.c: Additional functions for instruction handling
instr2.c: Additional functions for instruction handling
lf.c: Functions related to Last-In-First-Out (LIFO) concept
monty.h: Header file containing function prototypes and struct definitions
qu.c: Functions related to queues
sstk.c: The main file responsible for running the Monty interpreter
strng.c: Contains utility functions for string manipulation
is.c: Contains functions to ignore spaces
Structures Used
stack_t: Doubly linked list representation of a stack (or queue)
instruction_t: Opcode and its function for stack, queues, LIFO, FIFO
Functions
The project uses various custom functions to perform operations like push, pall, pint, pop, etc., as required by the Monty language specifications.

Author
Developed by himza25


