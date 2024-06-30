<!--------------------------------

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&height=200&color=0ABAB5&text=Good%20Job!&section=footer&fontColor=fcf3f2&fontAlignY=46" />
</p>
<h1 align="center"> Hello! I'm sorry! Working on that! </h1>
----->

<!-------Libft_Image-------->
<p align="center">
	<img src="https://capsule-render.vercel.app/api?type=venom&height=200&color=0ABAB5&text=Libft&fontAlign=50&fontAlignY=61&animation=fadeIn&fontColor=fcf3f2&fontSize=100" />
</p>

<!-------About-------->

<h1> About </h1>

This is the firt main project of 42 School Common Core, `Libft`. Creating our first library in C!! Exciting, right!? Follow me and lets discover more about it!

----
<div>
<h3 align=center>Index</h3>

<ul>
	<li><strong><a href="#-about-" style="color:white">Guide</a></strong></li>
	<ul style="list-style-type:disc">
		<li><a href="#-concepts-">1. Introduction </a></li>
		<li><a href="#-preprocessors-">2. Preprocessors </li>
</ul>

* [About](#-about-)
* [Concepts!](#-concepts-)
* [Preprocessors](#-preprocessors-)
	* [Preprocessor Directives in C](#-preprocessor-directives-in-c-)
	* [About Libraries... again](#-about-libraries-again-)
 * [Building our first C Library](#building-our-first-c-library)
   	* [1. The Preprocessor Directives for Libft](#-1-the-preprocessor-directives-for-libft-)
   	* [2. The Functions](#-2-the-functions-)
   	* [3. Makefile](#-3-makefile-)
 * [Finally](#-finally-)
  * [License](#license)

</div>
<!---------------------
## <a name="index-0">Index</a>
<ul>
	<li><strong><a href="#beginners-guide" style="color:white">Beginner's Guide</a></strong></li>
	<ul style="list-style-type:disc">
		<li><a href="#index-1">1. What is make?</a></li>
		<li><a href="#index-2">2. An introduction to Makefiles</a></li>
		<li><a href="#index-3">3. Rules</a></li>
		<li><a href="#index-4">4. A simple Makefile</a></li>
		<li><a href="#index-4.1">4.1 Dependencies and rule processing</a></li>
		<li><a href="#index-5">5. Variables</a></li>
		<li><a href="#index-6">6. Automatic Variables</a></li>
		<li><a href="#index-7">7. Towards a more flexible Makefile</a></li>
		<ul style="list-style-type:disc">
			<li><a href="#index-7.1">7.1. Removing more redundancy</a></li>
			<li><a href="#index-7.2">7.2. Implicit Rules</a></li>
			<li><a href="#index-7.3">7.3. Implicit Variables</a></li>
			<li><a href="#index-7.4">7.4. Relinking</a></li>
		</ul>
	</ul>
	<li><strong><a href="#advanced-guide" style="color:white">Advanced Topics</a></strong></li>
	<ul style="list-style-type:disc">
		<li><a href="#conditionals">A1 - Conditional Directives</a></li>
		<li><a href="#mmd-flag">A2 - The MMD flag</a></li>
		<li><a href="#command-line">A3 - Command-line variables</a></li>
		<li><a href="#functions">A4 - Functions</a></li>
		<ul style="list-style-type:disc">
			<li><a href="#functions-1">A4.1 - Functions Call Syntax</a></li>
			<li><a href="#functions-2">A4.2 - Functions for String Manipulation</a></li>
			<li><a href="#functions-3">A4.3 - Functions for File Names</a></li>
			<li><a href="#functions-4">A4.4 - Functions for Generic Purposes</a></li>
		</ul>
		<li><a href="#vpath">A5 - The vpath directive</a></li>
	</ul>
	<!-- <li>Tips and tricks</li>
	<ul>
		<li><a href="#organize-project">Organize your project with vpath</a></li>
		<li><a href="#variable-operators">Other variable related operators</a></li>
		<li><a href="#activate-debug">Activate debug commands/flags with conditionals</a></li>
		<li><a href="#general-tips">General tips</a></li>
	</ul> -->
	<!------
 <li><strong><a href="#useful-topics" style="color:white">Useful Topics</a></strong></li>
	<ul style="list-style-type:disc">
		<li><a href="#special-targets">Special Targets</a></li>
		<li><a href="#flags">Makefile Flags</a></li>
		<li><a href="#errors">Good-to-know Errors</a></li>
	</ul>
</ul> --->



------------------------------------------------------------------
----
<h1> About </h1>

This is the firt main project of 42 School Common Core, `Libft`. Creating our first library in C!! Exciting, right!? Follow me and lets discover more about it!

----
<h1> 1. Concepts </h1>

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

<div align="center">
	
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

</div>
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

Also is important to know that we have mainly two types of libraries:
<ul>
	<li>
		Static libraries (.a files) are linked directly into the executable at compile time.
	</li>
	<li>
		Dynamic libraries (.so files in Unix/Linux, .dll files in Windows) are linked at runtime.
	</li>
</ul>

In `Libft` project, we're going to create our library called Libft using `.c` functions. If the header of the library, as shown, must have `.h`, we are going to call our library `libft.h`!!

-----
<h1>Building our first C Library</h1>
<p align="center">
	<img src="https://www.familyhandyman.com/wp-content/uploads/2018/01/FH98DJA_01234LEAD.jpg?resize=522%2C522">
<h5 align="center" > this is you after finishing your Libft </h5>
</p>
<br>
Ok! Now it's time to get serious. Let's imagine that you're building in your house a very lovely library. How this would look like? I know.. you may be asking, what does this has to do with Libft? Well, everything!<br>

<br> First of all, it's a must to have bookshelves, an structure, for you to have your books placed in order, so when you need to read something, you'll have no troubles finding it.

After that, and most important, the books! Which are going to be the books? And why? 

Lastly, you have to protected it, build a door (very important) and lock it with a key. That key will be important for us to access your fabulous library.

In other words, we need to write a **1. Preprocessor Directives**, the **2. Functions** needed, and the key to the library, or simply, our **3. Makefile**

<h2> 1. The Preprocessor Directives for Libft </h2>

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

<h2> 2. The Functions </h2>

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
<h2> 3. Makefile </h2>

Well, actually, the Makefile is a whole new topic. Quite amazing, I would say. Highly encourage you to read more about it. But, to summarize it, let's consider a few aspects of it.

First, **what** is a Makefile?
Second, **why** do we need it? Lastly, **HOW** DO WE WRITE IT?

Calm down! Here we have it:

<h3> 1. What </h3>
Makefiles are a simple way to organize code compilation. Also `make` is a program utility that automatically determines which parts of a large program need to be recompiled, and issues commands to recompile them. It reads instructions from a `Makefile` <br><br>
The make utility is an automatic tool capable of deciding which commands can/should be executed.
  
 <h3> 2. Why? </h3>
Build automation to build executable code (such as a program or **library**) from source code, preventing manual file-by-file compilation.

<h3>3. How? </h3>
The Makefile is called to handle the complitation and linking of projects and it's files. <br><br>

The core of the makefile consists of rules defined as follows:
```Makefile
target: [prerequisite_1], [prerequisite_2], ..., [prerequisite_n]
	command1,
	command2,
	command3,
```
<ol> 
	<li> The target is the name of the action you want to execute or usually the name of the file you want to produce.</li> 
	<li> Prerequisites are files that are used as input to create the target. </li>
	<li> The commands are part of what we call the recipe, which is the action that the make command performs. The recipe can have more than one command, on the same line or several.</li>
</ol>
 
Example: To generate a `hello.o` file from a `hello.c` file we write:
```Makefile
hello.o: hello.c
	clang -c hello.c
```

The power that we have to create can be use to destroy (or clean)
```Makefile
clean:
	rm -rf hello.o
```
> Some rules don't need dependencies

You can also fave a similar rule to clean both object files and execute
```Makefile
fclean: clean
	rm -rf a.out
```

Nice! Okay! Everything is good so far. We know the basic sintax of Makefile, how we can apply this when creating a library??

Easy!
<ol>
	<li>First thing you must do is create your C source files containing any functions that will be used. Your library can contain multiple object files.</li>
	<li>After creating the C source files, compile the files into object files.</li>
</ol>

To create a library:
```bash
ar rcs libmylib.a obj_file1.o obj_file2.o obj_file3.o

# in other words
 ar - create, modify, and extract from archives
	r - Insert the files member into archive
	c - Create the archive
	s - Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive.
```

Perfect!! So how can we compile anyway?

<h3> Compiling and Macros of Makefile </h3>

What compiling is? Shortly, its when your source code is transform into an object file and link these object files to transform them into a binary.

Like this:
<p align="center">
	<img src="https://embarcados.com.br/wp-content/uploads/2017/09/makefile-1.jpg">
</p>

To know more about compiling, read more in [here](https://unstop.com/blog/compilation-in-c)

If we use `Makefile` to compile, how exactly we do it?

Let's look at this [example](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/) writen by Bruce Maxwell in the Colby Computer Science College considering 3 files: `hellomake.c`, `hellofunc.c` and `hellomake.h`

```C
//FILE 1
#include <hellomake.h>

int main() {
  // call a function in another file
  myPrintHelloMake();

  return(0);
}

```

```C
//FILE 2
#include <stdio.h>
#include <hellomake.h>

void myPrintHelloMake(void) {

  printf("Hello makefiles!\n");

  return;
}
```

```C
//FILE 3

/*
example include file
*/

void myPrintHelloMake(void);

```

Normally, you would compile this collection of code by executing the following command:

```C
 gcc -o hellomake hellomake.c hellofunc.c -I.
```

This compiles the two `.c` files and names the executable hellomake. The `-I`. is included so that gcc will look in the current directory (.) for the include file hellomake.h. Without a makefile, the typical approach to the test/modify/debug cycle is to use the up arrow in a terminal to go back to your last compile command so you don't have to type it each time, especially once you've added a few more `.c` files to the mix.

Unfortunately, this approach to compilation has two downfalls. First, if you lose the compile command or switch computers you have to retype it from scratch, which is inefficient at best. Second, if you are only making changes to one .c file, recompiling all of them every time is also time-consuming and inefficient. So, it's time to see what we can do with a makefile.

The simplest makefile you could create would look something like:

```Makefile
hellomake: hellomake.c hellofunc.c
     gcc -o hellomake hellomake.c hellofunc.c -I.
```

In order to be a bit more efficient, let's try the following:

```Makefile
CC=gcc
CFLAGS=-I.

hellomake: hellomake.o hellofunc.o
     $(CC) -o hellomake hellomake.o hellofunc.o
```

So now we've defined some constants `CC` and `CFLAGS`. It turns out these are special constants that communicate to make how we want to compile the files `hellomake.c` and `hellofunc.c`. In particular, the **macro** `CC` **is the C compiler to use**, and `CFLAGS` is the list of flags to pass to the compilation command. By putting the object files--hellomake.o and hellofunc.o--in the dependency list and in the rule, `make` knows it must first compile the .c versions individually, and then build the executable hellomake.

Using this form of makefile is sufficient for most small scale projects. However, there is one thing missing: dependency on the include files. If you were to `make` a change to hellomake.h, for example, make would not recompile the .c files, even though they needed to be. In order to fix this, we need to tell `make` that all .c files depend on certain .h files. We can do this by writing a simple rule and adding it to the makefile.

```Makefile
CC=gcc
CFLAGS=-I.
DEPS = hellomake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: hellomake.o hellofunc.o 
	$(CC) -o hellomake hellomake.o hellofunc.o 
```

This addition first creates the macro DEPS, which is the set of .h files on which the .c files depend. Then we define a rule that applies to all files ending in the .o suffix. The rule says that the .o file depends upon the .c version of the file and the .h files included in the DEPS macro. The rule then says that to generate the .o file, `make` needs to compile the .c file using the compiler defined in the CC macro. The -c flag says to generate the object file, the `-o $@` says to put the output of the compilation in the file named on the left side of the `:`, the `$<` is the first item in the dependencies list, and the CFLAGS macro is defined as above.

As a final simplification, let's use the special macros `$@` and `$^`, which are the left and right sides of the `:`, respectively, to make the overall compilation rule more general. In the example below, all of the include files should be listed as part of the macro DEPS, and all of the object files should be listed as part of the macro OBJ.

```Makefile
CC=gcc
CFLAGS=-I.
DEPS = hellomake.h
OBJ = hellomake.o hellofunc.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
```

So what if we want to start putting our .h files in an include directory, our source code in a src directory, and some local libraries in a lib directory? Also, can we somehow hide those annoying .o files that hang around all over the place? The answer, of course, is yes. The following makefile defines paths to the include and lib directories, and places the object files in an obj subdirectory within the src directory. It also has a macro defined for any libraries you want to include, such as the math library `-lm`. This makefile should be located in the src directory. Note that it also includes a rule for cleaning up your source and object directories if you type `make clean`. The .PHONY rule keeps `make` from doing something with a file named clean.

```Makefile
IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = hellomake.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = hellomake.o hellofunc.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
```

So now you have a perfectly good makefile that you can modify to manage small and medium-sized software projects. You can add multiple rules to a makefile; you can even create rules that call other rules. For more information on makefiles and the make function, check out the [GNU Make Manual](www.gnu.org/software/make/manual/make.html), which will tell you more than you ever wanted to know (really).

<h1> Finally! </h1>
Ok! Now that you know what a library is and how to build it, it is your chance to explore more and more in this project! Understanding the workings of libraries in C and the use of Makefiles is essential for efficient software development. Libraries in C provide a modular approach to coding, enabling the reuse of functions and promoting code organization and maintainability. Static and dynamic libraries offer different advantages, from faster execution times to reduced memory usage, depending on the application's needs. <br><br>


Makefiles, on the other hand, streamline the build process by automating the compilation and linking stages. They ensure that only the necessary parts of a project are rebuilt, saving time and reducing the potential for errors. With the ability to define dependencies and custom build rules, Makefiles are powerful tools for managing complex projects!! <br>

Together, the use of libraries and Makefiles can significantly enhance the development workflow, leading to more robust and scalable software solutions. By mastering these tools, software engineers and developers can improve their productivity and ensure their code is both efficient and maintainable. <br>

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&height=150&color=0ABAB5&text=Good%20Job!&section=footer&fontColor=fcf3f2&fontAlignY=46" />
</p>

### License

This work is published under the terms of <a href="https://github.com/lude-bri/42_Common_Core/blob/main/LICENSE.md">42 Unlicense</a>.

<p align="right">(<a href="#readme-top">get to top</a>)</p>


