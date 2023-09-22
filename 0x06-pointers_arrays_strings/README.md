# 0x06 Pointers, Arrays, and Strings

This repository contains a collection of user-defined functions written in C language, aimed at helping users learn and understand the concepts of pointers, arrays, and strings. These fundamental concepts are crucial for understanding low-level programming and memory management.

---

## Table of Contents

1. [Introduction](#introduction)
2. [List of Functions](#list-of-functions)
3. [Usage](#usage)

---

## Introduction

The `0x06-pointers_arrays_strings` project is designed to provide a practical understanding of pointers, arrays, and strings in C programming. It includes various functions that demonstrate how to manipulate data using these fundamental concepts. By working with this project, users can enhance their skills in memory management, data manipulation, and program efficiency.

---

## List of Functions

### 1. `0-strcat.c`

- **Function Name:** `char* custom_strcat(char* dest, const char* src)`
- **Description:** Concatenates two strings. Appends the content of the source string (`src`) to the destination string (`dest`), modifying `dest`.

### 2. `1-strncpy.c`

- **Function Name:** `char* custom_strncpy(char* dest, const char* src, size_t n)`
- **Description:** Updates the `strncpy` function to copy at most `n` bytes from the source string (`src`) to the destination string (`dest`).

### 3. `2-strcpy.c`

- **Function Name:** `char* custom_strcpy(char* dest, const char* src)`
- **Description:** Copies a string from source (`src`) to destination (`dest`), including the null-terminating character.

### 4. `3-strcmp.c`

- **Function Name:** `int custom_strcmp(const char* str1, const char* str2)`
- **Description:** Compares two strings (`str1` and `str2`) and returns an integer based on their comparison:
  - Returns 0 if both strings are equal.
  - Returns a negative value if `str1` is less than `str2`.
  - Returns a positive value if `str1` is greater than `str2`.

### 5. `4-rev_array.c` (incomplete, please provide additional information)

---

## Usage

To use these functions, follow these steps:

1. Clone the repository to your local machine.
2. Compile the `.c` files using a C compiler.
3. Use the resulting executable and call the respective functions as needed.

Example:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o my_program
./my_program```
