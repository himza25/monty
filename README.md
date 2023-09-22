# Monty Bytecode Interpreter

## Author
- himza25

---

## Table of Contents
1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [File Descriptions](#file-descriptions)
5. [Usage](#usage)
6. [License](#license)

---

## Introduction

This repository is dedicated to the Monty Bytecode Interpreter project, a simple stack and queue management program written in C. Designed as a learning exercise in data structures, file I/O, and C programming fundamentals.

---

## Features
- Opcode implementation for stack and queue manipulation.
- Error handling capabilities.
- Betty compliant code style.
- Compatible with Ubuntu 20.04 LTS.

---

## Installation

To install, simply clone this repository and compile the `.c` files using `gcc`.

```bash
git clone https://github.com/your_repo.git
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
For Vim users, you can easily navigate through the code using Vim's extensive feature set.

File Descriptions
Core Files
monty.h
The header file containing all the function prototypes and struct definitions necessary for the project.

Functionality Implementations
mod_ops.c
Functions responsible for handling modulo, printing characters, printing strings, and rotating the stack.

stack_ops.c
Contains functions to push to stack and queue and to free a doubly linked list.

state_ops.c
Functions for changing the storing type between stack and queue.

monty_main.c
The main driver of the program, responsible for reading and interpreting the Monty bytecodes from a file.

digit_check.c
Contains utility functions to check for digits, _isdigit and isinteger included.

Usage
After compiling, execute the program using:

bash
Copy code
./monty <filename.m>
Replace <filename.m> with the actual file name containing Monty bytecodes.
