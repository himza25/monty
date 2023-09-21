# Monty Interpreter by himza25

## Table of Contents

1. [Introduction](#introduction)
2. [Technologies](#technologies)
3. [Files](#files)
4. [Usage](#usage)
5. [Examples](#examples)
6. [Author](#author)

## Introduction

This repository contains the implementation of a Monty 0.98 scripting language interpreter. The language is a set of bytecode instructions that manipulate a stack data structure. The interpreter supports a variety of stack manipulation opcodes like `push`, `pop`, `pall`, `add`, and `sub`.

## Technologies

- C Programming Language
- Compiled on Ubuntu 20.04 LTS using gcc with flags `-Wall -Werror -Wextra -pedantic -std=c89`
- Code conforms to the Betty coding style

## Files

- `monty.h`: Header file containing all function prototypes and struct definitions.
- `main.c`: Main function file.
- `file_open.c`: File handling functions.
- `file_read.c`: File reading and line parsing functions.
- `opcode_exec.c`: Function to execute opcode.
- `opcode_helpers1.c`: Helper functions for various opcodes (`push`, `pall`).
- `opcode_helpers2.c`: Helper functions for additional opcodes (`add`, `sub`).
- `stack_push.c`: Stack operation - push.
- `stack_pop.c`: Stack operation - pop.
- `error_general.c`: General error handling functions.
- `error_specific.c`: Specific error handling functions.

## Usage

Compile the code and run the resulting executable with a Monty bytecode file as argument:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
./monty bytecode_file.m
