<!--------------------------------

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=rounded&height=300&color=gradient&text=Work%20in%20Progress" />
</p>
<h1 align="center"> Hello! I'm sorry! Working on that! </h1>
----->

<p align="center">
	<img src="https://capsule-render.vercel.app/api?type=venom&height=200&color=0ABAB5&text=Libft&fontAlign=50&fontAlignY=61&animation=fadeIn&fontColor=fcf3f2&fontSize=100" />

</p>

<div align="center">
<h3 align=center>Summary</h3>

<!-- mtoc-start -->

* [About 📌](#about-)
* [Usage](#usage)
* [Setup & Compilation 🖇️](#setup--compilation-)
* [Makefile rules 🔧](#makefile-rules-)
* [Implementation](#implementation)
  * [License](#license)

</div>

----
<h1> About </h1>

This is the firt main project of 42 School Common Core, `Libft`. Creating our first library in C!! Exciting, right!? Follow me and lets discover more about it!

----
<h1> First thing first: Concepts! </h1>

We must create a library in C! Okay... but what is a library? As you can imagine, its a lovely place, filled with possibilities! In our case, this place is simmilar to a repository, and the possibilities are our functions! Let's deep dive.

Whenever we code, we are writing commands to the computer and, if everything is correct, we expect a successfull output. Nevertheless, wrinting commands in C (or other language) is simply abstracting tons of minimal processes inside a computer hardware, turning on and off thousands of switches. 

Those swiches doesn't understand `while` or `if/else`, only understands zeros and ones. Thats why its binary! So, how the computer understands those complexes commands? Well, a translator is needed. And, as we know, every translator needs a sort of a dictionary. This is exactly what our library is. A dictionary!

In short:

> _Libaries consist of a set of related functions to perform a common task. Standard system libraries are usually found in /lib and /usr/lib/ directories._ [(Dartmouth.edu)](https://www.cs.dartmouth.edu/~campbell/cs50/buildlib.html)

A library is a file containing a set of functions (pieces of code), variables, macros, etc., already implemented, and which can be used by the programmer in his program!

Basically, whenever we use `#include`, we are informing the **preprocessor** to handle the contents of a specified file. In other words, we tell the computer to lookup that standard library (or dictionary, in our analogy) and read the following code according to the rules defined by the library!

The `#include` command allows two syntaxes:
<ul>
 	<li> #include < library_name > : the preprocessor will search for the library in the compiler's pre-specified search paths. We use this syntax when we are including a library that is system-specific, such as <stdio.h> and <stdlib.h> </li>
   	<li> #include "library_name" : the preprocessor will look for the library in the same directory where our program is located. We can also choose to inform the name of the file with the full path, that is, in which directory it is located and how to get there </li>
	</ul>

 Example:
 ```C
#include <unistd.h>  " Standard Library
#include "libft.h"   " Non standart Library
```

> In general, library files in the C language end with the extension .h

In order to understand more about the topic, let's talk about the **preprocessors**!

-----
<h1> Preprocessors </h1>

Preprocessors is a program that processes its input data to produce output that is used as input in another program!

It means that before even reading the code, it will take into account what is defined, almost like rules, and the program will execute accordingly the rules we've set. 

In C programming, preprocessing is the first step in the compilation of a C code. It occurs before the tokenization step. One of the important functions of a preprocessor is to include the header files that contain the library functions used in the program. The preprocessor in C also defines the constants and expands the macros.[(see more)](https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm)

> A Macro in C is essentially a piece of code or a value that is associated with an identifier. This identifier, known as the macro name, is defined using the #define preprocessor directive

The preprocessor statements in C are called directives. A preprocessor section of the program always appears at the top of the C code. Each preprocessor statement starts with the hash (#) symbol.

<h3> Preprocessor Directives in C </h3>

The following [table](https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm) lists down all the important preprocessor directives

| Directive	| Description |
-------------- | ---------------
| # define |	Substitutes a preprocessor macro.|
| #include	|	Inserts a particular header from another file. |
| #undef	|	Undefines a preprocessor macro. |
| #ifdef	|	Returns true if this macro is defined. |
| #ifndef	|	Returns true if this macro is not defined.
| #if		| Tests if a compile time condition is true.
| #else		| The alternative for #if.
| #elif		| #else and #if in one statement.
| #endif	|	Ends preprocessor conditional.
| #error	|	Prints error message on stderr.
| #pragma	|	Issues special commands to the compiler, using a standardized method.

<h3> About Libraries... again </h3>
The C language allows us to create our own library. In it, we can place our functions, structures, etc., which makes it more practical and easier to use in other projects.

Libraries are not very different from source code files!

> A library is like your main source code file, with the difference that it does not have a main() function. This is because your program will not start in the library.

When we want to create a library, we consider main functions, those that are very useful to us, which we will always use. These functions, instead of always being rewritten, will be implied when we announce our library using the preprocessor directives!

To transform the functions into a library, we need to create two files:
<ul>
	<li> Header: this file contains the declarations and definitions of what is contained within the library. Here we define which functions (just your prototype), types and variables will be part of the library. Its extension is .h </li>
	<li>Library source code: file that contains the implementation of the functions defined in the header. Its extension is .c </li>
</ul>

In `Libft` project, we're going to create our library called Libft using `.c` functions. If the header of the library, as shown, must have `.h`, we are going to call our library `libft.h`!!

-----
<h1>Building our first C Library</h1>
<img src="https://www.familyhandyman.com/wp-content/uploads/2018/01/FH98DJA_01234LEAD.jpg?resize=522%2C522">
<h5> this is you after finishing Libft </h5>

Ok! Now it's time to get serious. Let's imagine that you're building in your house a very lovely library. How this would look like? I know.. you may be asking, what does this has to do with Libft? Well, everything!

First of all, it's a must to have bookshelves, an structure, for you to have your books placed in order, so when you need to read something, you'll have no troubles finding it.

After that, and most important, the books! Which are going to be the books? And why? 

Lastly, you have to protected it, build a door (very important) and lock it with a key. That key will be important for us to access your fabulous library.

In other words, we need to write a **Preprocessor Directives**, the **Functions** needed, and the **name** of the executable file.

<h2> The Preprocessor Directives for Libft </h2>

So let's begin defining our library with:
```C
#ifndef LIBFT_H
# define LIBFT_H

(the functions)

#endif
```
Which means
	<ol>
 		<li> If LIBFT_H macro is not defined </li>
   		<li> Define as LIBFT_H </li>
     		<li> Ends preprocessor conditional </li>
 	</ol>
Our bookshelve is now created! So lets fill this with our books.

<h2> The Functions </h2>

This project comprises `43` functions divided into three sections:
- **Mandatory Part 1**, a selection of `23` `libc` functions;
- **Mandatory Part 2**, `11` more non-standard or modified-standard functions;
- plus a **Bonus Part**, a final set of `9` functions helpful for manipulating lists;

___

<details>
	<summary style="font-size: 18px; font-weight: bold;">Mandatory Part 1 📝</summary>
<ul>
<details>
	<summary> ✅ ft_isalpha</summary>
	<p>Checks if a given character is a letter of the alphabet (a-z or A-Z);<p>
</details>
<details>
	<summary> ✅ ft_isdigit</summary>
	<p>Checks if a given character is a digit (0-9);</p>
</details>
<details>
	<summary> ✅ ft_isalnum</summary>
	<p>Checks if a character is alphanumeric (a-z, A-Z or 0-9);</p>
</details>
<details>
	<summary> ✅ ft_isascii</summary>
	<p>Checks if a given character is within the ASCII character set (0-127);</p>
</details>
<details>
	<summary> ✅ ft_isprint</summary>
	<p>Checks if a a given character is within the printing ASCII character set (32-126);</p>
</details>
<details>
	<summary> ✅ ft_strlen</summary>
	<p>Calculates the length of a null-terminated string;</p>
</details>
<details>
	<summary> ✅ ft_memset</summary>
	<p>Sets a given block of memory to a specific value/character;</p>
</details>
<details>
	<summary> ✅ ft_bzero</summary>
	<p>Sets a given block of memory to zero;</p>
</details>
<details>
	<summary> ✅ ft_memcpy</summary>
	<p>Copies a specified number of bytes from one memory location to another;</p>
</details>
<details>
	<summary> ✅ ft_memmove</summary>
	<p>Moves/Copies a specified number of bytes from one memory location to another, even when the source and destination regions overlap;</p>
</details>
<details>
	<summary> ✅ ft_strlcpy</summary>
	<p>Copies a string with a given length, ensuring that the destination buffer is not overrun; Returns the total length of 'src';</p>
</details>
<details>
	<summary> ✅ ft_strlcat</summary>
	<p>Appends a null-terminated string 'src' to the end of 'dst', appending at most `size - strlen(dst) - 1` bytes, null-terminating the result; Returns the initial length of 'dst' plus the length of 'src';</p>
</details>
<details>
	<summary> ✅ ft_toupper</summary>
	<p>Converts a given character to uppercase;</p>
</details>
<details>
	<summary> ✅ ft_tolower</summary>
	<p>Converts a given character to lowercase;</p>
</details>
<details>
	<summary> ✅ ft_strchr</summary>
	<p>Searches for the first occurrence of a given character in a string, returning a pointer to its location in memory; If no match is found returns NULL;</p>
</details>
<details>
	<summary> ✅ ft_strrchr</summary>
	<p>Searches for the last occurrence of a given character in a string, returning a pointer to its location in memory; If no match is found returns NULL;</p>
</details>
<details>
	<summary> ✅ ft_strncmp</summary>
	<p>Compares two strings up to a given number of characters, returns '0' if they are equal, or returns the difference between the first two characters that do not match;</p>
</details>
<details>
	<summary> ✅ ft_memchr</summary>
	<p>Searches the initial 'n' bytes within a block of memory for a specific byte value, returning a pointer to its location in memory; If no match is found returns NULL;</p>
</details>
<details>
	<summary> ✅ ft_memcmp</summary>
	<p>Compares two strings up to a given number of bytes, returning '0' if they are equal, or returns the difference between the first two characters that do not match;</p>
</details>
<details>
	<summary> ✅ ft_strnstr</summary>
	<p>Searches 'len' characters for the first occurrence of the null-terminated string 'little' in the string 'big'; If 'little' is empty 'big' is returned, if no match is found returns NULL, otherwise returns a pointer to the first character of the first occurrence of 'little' in 'big';</p>
</details>
<details>
	<summary> ✅ ft_atoi</summary>
	<p>Converts the initial portion of the string pointed to by 'nptr' to int; The string may begin with an arbitrary amount of whitespace (as determined by isspace(3)) followed by a single optional'+' or '-' sign. Returns the converted value or '0' on error;</p>
</details>
<details>
        <summary> ✅ ft_calloc</summary>
	<p>Allocates memory for an array of 'nmemb' elements of 'size' bytes each; Returns a pointer to the allocated memory, or NULL if the allocation fails; The memory is set to zero.</p>
</details>
<details>
	<summary> ✅ ft_strdup</summary>
	<p>Returns a pointer to a new string, a duplicate of the string pointed to by 's', or NULL if the allocation fails; Memory for the string is obtained with 'malloc(3)', and can be freed using 'free(3)';</p>

</details>
</ul>
</details>

___

<details>
	<summary style="font-size: 18px; font-weight: bold;">Mandatory Part 2 📝</summary>
	<ul>
	<details>
		<summary> ✅ ft_substr</summary>
		<p>Allocates memory (with malloc(3)) and returns a substring from the string 's'. Starting at index 'start' and is of maximum size 'len'; If allocation fails returns NULL;</p>
	</details>
	<details>
		<summary> ✅ ft_strjoin</summary>
		<p>Allocates memory (with malloc(3)) and returns a new string, which is the result of the concatenation of 's1' and 's2'. If the allocation fails returns NULL;</p>
	</details>
	<details>
		<summary> ✅ ft_strtrim</summary>
		<p>Allocates memory (with malloc(3)) and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string; Returns NULL if the allocation fails;</p>
	</details>
	<details>
		<summary> ✅ ft_split</summary>
		<p>Allocates memory (with malloc(3)) and returns an array of strings obtained by splitting 's' using the  chracter 'c' as de limiter. The array must end with a NULL pointer. If allocation fails  returns NULL;</p>
	</details>
	<details>
		<summary> ✅ ft_itoa</summary>
		<p>Allocates memory (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled. If allocation fails return NULL;</p>
	</details>
	<details>
		<summary> ✅ ft_strmapi</summary>
		<p>Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’. Returns NULL if the allocation fails;</p>
	</details>
	<details>
		<summary> ✅ ft_striteri</summary>
		<p>Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary. Returns nothing;</p>
	</details>
        <details>
		<summary> ✅ ft_putchar_fd</summary>
		<p>Outputs the character ’c’ to the given file descriptor;</p>
	</details>
	<details>
		<summary> ✅ ft_putstr_fd</summary>
		<p>Outputs the string 's' to the given file descriptor;<p>
	</details>
	<details>
		<summary> ✅ ft_putendl_fd</summary>
		<p>Outputs the string 's' followed by a newline to the given file descriptor;</p>
	</details>
	<details>
		<summary> ✅ ft_putnbr_fd</summary>
		<p>Outputs the integer 'n' to the given file descriptor;</p>
	</details>
	</ul>
</details>

___

<details>
	<summary style="font-size: 18px; font-weight: bold;">Bonus Part 📝</summary>
	<ul>
	<details>
		<summary> ✅ ft_lstnew</summary>
		<p>Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.<p>
	</details>
	<details>
		<summary> ✅ ft_lstadd_front</summary>
		<p>Adds the node ’new’ at the beginning of the list.</p>
	</details>
	<details>
		<summary> ✅ ft_lstsize</summary>
		<p>Counts the number of nodes in a list.</p>
	</details>
	<details>
		<summary> ✅ ft_lstlast</summary>
		<p>Returns the last node of the list.</p>
	</details>
	<details>
		<summary> ✅ ft_lstadd_back</summary>
		<p>Adds the node ’new’ at the end of the list.</p>
	</details>
	<details>
		<summary> ✅ ft_lstdelone</summary>
		<p>Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.</p>
	</details>
	<details>
		<summary> ✅ ft_lstclear</summary>
		<p>Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.</p>
	</details>
	<details>
		<summary> ✅ ft_lstiter</summary>
		<p>Iterates the list ’lst’ and applies the function ’f’ on the content of each node.</p>
	</details>
	<details>
		<summary> ✅ ft_lstmap</summary>
		<p>Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.</p>
	</details>
	</ul>
	</div>
</details>

-----
<h1>Makefile</h1>


### License

This work is published under the terms of <a href="https://github.com/lude-bri/42_Common_Core/blob/main/LICENSE.md">42 Unlicense</a>.

<p align="right">(<a href="#readme-top">get to top</a>)</p>


