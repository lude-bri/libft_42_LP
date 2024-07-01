
<!-------Libft_Image-------->
<p align="center">
	<img src="https://capsule-render.vercel.app/api?type=venom&height=200&color=0ABAB5&text=Libft&fontAlign=50&fontAlignY=61&animation=fadeIn&fontColor=fcf3f2&fontSize=100" />
</p>

<!-------About-------->

## About

This is the firt main project of 42 School Common Core, `Libft`. Creating our first library in C!! Exciting, right!? Follow me and lets discover more about it!

----
## <a name="#index-0">Index</a>

<ul>
	<li><strong><a href="#1-libraries" style="color:white">1. Libraries </a></strong></li>
	<ul style="list-style-type:disc">
		<li><a href="#11-how-libraries-works-linker-"> 1.1. How Libraries works: Linker</a></li>
		<li><a href="#12-static-library-and-dynamic-library"> 1.2. Static library and Dynamic library</a></li>
	</ul>
	<li><strong><a href="#-2-preprocessors-" style="color:white">2. Preprocessors </a></strong></li>
	<ul style="list-style-type:disc">
		<li><a href="#-21-preprocessor-directives-in-c-"> 2.1. Preprocessor Directives in C</a></li>
		<li><a href="#22-types-of-preprocessors-directives"> 2.2. Types of Preprocessors Directives</a></li>
  		<ul style="list-style-type:square">
  			<li><a href="#221-macros"> 2.1.1. Macros </a></li>
			<li><a href="#222-file-inclusion"> 2.1.2. File Inclusion </a></li>
			<li><a href="#223-conditional-compilation"> 2.1.3. Conditional Compilation </a></li>
		</ul>
		<li><a href="#23-about-libraries-again"> 2.3. About Libraries... again </a></li>
	</ul>
	<li><strong><a href="#-3-building-our-first-c-library-" style="color:white">3. Building our first C Library </a></strong></li>
	<ul style="list-style-type:disc">
		<li><a href="#-31-the-preprocessor-directives-for-libft-"> 3.1. The Preprocessor Directives for Libft </a></li>
		<li><a href="#-32-the-functions-"> 3.2. The Functions </a></li>	
	</ul>
	<li><strong><a href="#-4-makefile-" style="color:white">4. Makefile </a></strong></li>
 	<ul style="list-style-type:disc">
		<li><a href="#-41-what-is-makefile-"> 4.1. What is Makefile? </a></li>
		<li><a href="#-42-why-do-we-need-makefile-"> 4.2. Why do we need Makefile? </a></li>
		<li><a href="#-43-how-to-makefile-"> 4.3. How to Makefile? </a></li>
		<li><a href="#-44-compiling-and-macros-of-makefile-"> 4.4. Compiling and Macros of Makefile </a></li>
 	</ul>
	<li><strong><a href="#-conclusion-" style="color:white">5. Conclusion </a></strong></li>
</ul>

------------------------------------------------------------------
----
# <a name="#index-1">1. Libraries</a>

In this project we’re going to create a Library. So.. what’s a library?

It's a lovely place, filled with information! It’s a collection of books, materials and knowledge! Similarly, a software library is a collection of read-only resources! It’s simply a file.

A library is a file containing a set of functions (pieces of code), variables, macros, etc., already implemented, and which can be used by the programmer in his program!

>[!IMPORTANT]
>The major difference of a Library from the rest of the applications or programs is that you cannot execute a library. Applications execute and they utilize libraries.

Whenever programmers code, they can use a same function multiple times. Instead of rewriting the same function all the time, it’s always better to automate this service and create a library that includes this function!

That’s why it is so handy to have your own library, so then you can perform better accordingly to the functions you use.

Helpfully, we don’t need to ALWAYS write our library. That is because there are already tons of standards libraries to use.

In short:

> _Libaries consist of a set of related functions to perform a common task. Standard system libraries are usually found in /lib and /usr/lib/ directories._ [(Dartmouth.edu)](https://www.cs.dartmouth.edu/~campbell/cs50/buildlib.html)

## <a name="#index-1.1">1.1. How Libraries works: Linker </a>

As mentioned, libraries are files, combinations of zeros and ones. Different from the other files, libraries are not executed, instead there linked.

Linking is a process that searches and combine libraries and other modules in a given order. This task is done by a software program called linker or binder.

The linker takes one or more object files (generated by a compiler or an assembler) and combines them into a single executable file, library file, or another object file.

You can see the folowing scheme the two important processes for this to work: **The Compiling Process** and **The Linking Process**

<div align=center>
	<image src=images/compilation.png>
	<image src=images/linking.png>
</div>

> In the case of the Unix environment, the executable file created is always named a.out, which means that each new compilation deletes the executable from the previous project.


As you can see, the library, represented in here as `.lib` is linked with the objects `.o` to create our executable program!

Those processes normally happen at the same time. As showned, our program `.c` goes to a compiling process first.

Compiling is the process that translate our program to our computer in machine language. The compiling process read first the Preprocessor (we are going to see this later), understands the rules and libraries implied, and then compiles.

When it is compiled into Assembly code, the assembler give us an object file (`.o`).

It is with the object file and libraries that the linker combines all in one single executable file so we can use our program.

## 1.2. Static library and Dynamic library

There are two basic ways of how library works. This one showed above is know as being the **Static Library**, but we can also see **Dynamic Library**

<ul>
	<li>
		<strong>Static libraries (.a files)</strong> are linked directly into the executable at compile time.
	</li>
</ul>

>In our case, that will be `libft.a`

<ul>
	<li>
		<strong>Dynamic libraries (.so)</strong> are linked at runtime of the application.
	</li>
</ul>

<div align=center>
	<image src=images/static-dynamic.png>
</div>

As you can see, we have major differences. 

In **Static Libraries** (.a), the library is locked into the program at compile time so cannot be modified without recompilation. You can have bigger libraries, but they are slower due to the compilation->linking process.

In **Dynamic Libraries** (.so), only the address of the library is provided in the target program so every program can access them without creating copies. Also it resides out of the the executable, so program makes only one copy of library at compile time. Normally they're smaller libraries, but way faster due to the fact that the functions are dynamically used by applications, not compiling and recompiling in every use.
<br>

In our case, the Libft project askes us to create an Static Library.

In C, to call a library we must use in the begining of our file a Preprocessor, so the compiler understands the rules and functions that will be used in our program. So let's talk about preprocessors.

-----
# <a name="#index-2"> 2. Preprocessors </a>

Preprocessors are programs that process the source code before compilation.

It means that before even reading the code, it will take into account what is defined, almost like rules, and the program will execute accordingly the rules we've set.

In C programming, preprocessing is the first step in the compilation of a C code. One of the important functions of a preprocessor is to include the header files that contain the library functions used in the program. The preprocessor in C also defines the constants and expands the macros.[(see more)](https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm)

> [!IMPORTANT]
> A Macro in C is essentially a piece of code or a value that is associated with an identifier. This identifier, known as the macro name, is defined using the #define preprocessor directive.

## <a name="#index-2-1"> 2.1. Preprocessor Directives in C </a>

The preprocessor statements in C are called directives. A preprocessor section of the program always appears at the top of the C code. Each preprocessor statement starts with the hash (#) symbol.

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

These preprocessors can be classified based on the type of function they perform.

## 2.2. Types of Preprocessors Directives

There are 3 main types of preprocessors directives 
<ol>
	<li><strong>Macros</strong></li>
	<li><strong>File Inclusion</strong></li>
 	<li><strong>Conditional Compilation</strong></li>
</ol>

### 2.2.1. Macros

Macros is a sort of abbreviation which you can define once an then use later.

Before you can use a macro, you must **define** it explicitly with the `#define` directive followed by the name of the macro and the code it should be an abbreviation for. [Math Utah](https://www.math.utah.edu/docs/info/cpp_1.html#SEC10)

Example:
```C
#define BUFFER_SIZE 42
```

We can also expand the use of macros with some specific arguments, for instance:
```C
// here is a macro that computes the absolute number of two numeric values. 
#define abs((n < 0) ? -n : n)
```

You can also find some Predifiend Macros in C which are useful in providing various functionalities to our program.[Geek for Geeks](https://www.geeksforgeeks.org/cc-preprocessors/)
   
### 2.2.2. File Inclusion
This type of preprocessor directive tells the compilter to include a file in the source program. Just like `#include`.

Whenever we use `#include`, we are informing the **preprocessor** to handle the contents of a specified file. In other words, we tell the computer to look up that standard library and read the following code according to the rules defined by the library!

The `#include` preprocessor directive is used to include the header files (`.h`)in the C program.

The `#include` command allows two syntaxes:
<ul>
 	<li> <strong> #include < library_name ></strong> : the preprocessor will search for the library in the compiler's pre-specified search paths. We use this syntax when we are including a library that is system-specific, such as < stdio.h > and < stdlib.h ></li> <br>
   	<li><strong> #include "library_name"</strong> : the preprocessor will look for the library in the same directory where our program is located. We can also choose to inform the name of the file with the full path, that is, in which directory it is located and how to get there </li>
	</ul>

 Example:
 ```C
#include <unistd.h>  " Standard Library
#include "libft.h"   " Non standart Library
```
> [!NOTE]
> In general, library files in the C language end with the extension .h


### 2.2.3. Conditional Compilation
This is a type of directive that helps to compile a specific portion of the program or to skip the compilation of some specific part of the program based on some conditions.

For instance:
```C
#ifdef macro_name
	// Code to be executed if macro_name is defined
#ifndef macro_name
	// Code to be executed if macro_name is not defined
#if constat_expr
	// Code to be executed if constant_expression is true
#elif another_constant_expr
	// Code to be executed if another_constant_expression is true
#else
	// Code to be executed if none of the above conditions are true
#endif
	// Code to end conditional compilation
```

## 2.3. About Libraries... again

The C language allows us to create our own library. In it, we can place our functions, structures, etc., which makes it more practical and easier to use in other projects.

Libraries are not very different from source code files!

> [!IMPORTANT]
> A library is like your main source code file, with the difference that it does not have a main() function. This is because your program will not start in the library.

When we want to create a library, we consider main functions, those that are very useful to us, which we will always use. These functions, instead of always being rewritten, will be implied when we announce our library using the preprocessor directives!

To transform the functions into a library, we need to create two files:
<ul>
	<li><strong>Header</strong>: this file contains the declarations and definitions of what is contained within the library. Here we define which functions (just your prototype), types and variables will be part of the library. <strong>Its extension is .h </strong></li></ul>

> Example: `libft.h`
<ul>
	<li><strong>Library source code</strong>: file that contains the implementation of the functions defined in the header. <strong>Its extension is .c.</strong></li>
</ul>

> Example: `our_function.c`

In `Libft` project, we're going to create our library called Libft using `.c` functions. If the header of the library, as shown, must have `.h`, we are going to call our library `libft.h`!!

-----
# <a name="#index-3"> 3. Building our first C Library </a>

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

## <a name="#index-3-1"> 3.1. The Preprocessor Directives for Libft </a>

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

## <a name="#index-3-2"> 3.2. The Functions </a>

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
# <a name="#index-4"> 4. Makefile </a>

Well, actually, the Makefile is a whole new topic. Quite amazing, I would say. Highly encourage you to read more about it. But, to summarize it, let's consider a few aspects of it.

First, **what** is a Makefile?
Second, **why** do we need it? Lastly, **HOW** DO WE WRITE IT?

Calm down! Here we have it:

## <a name="#index-4-1"> 4.1. What is Makefile? </a>

Makefiles are a simple way to organize code compilation. Also `make` is a program utility that automatically determines which parts of a large program need to be recompiled, and issues commands to recompile them. It reads instructions from a `Makefile` <br><br>
The make utility is an automatic tool capable of deciding which commands can/should be executed.
  
## <a name="#index-4-2"> 4.2. Why do we need Makefile? </a>

Build automation to build executable code (such as a program or **library**) from source code, preventing manual file-by-file compilation.

## <a name="#index-4-3"> 4.3. How to Makefile? </a>

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
```Makefile
ar rcs libmylib.a obj_file1.o obj_file2.o obj_file3.o

# in other words
 ar - create, modify, and extract from archives
	r - Insert the files member into archive
	c - Create the archive
	s - Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive.
```

Perfect!! 

Knowing this, here you can see a very simple Makefile to compile and create a library!

This example is considering the compilation with `cc` and some particular flags. The sources of the library (`SCR`) in this case are the functions of the Libft project.

```Makefile
#########################
#	MACROS		#
#########################

CC = cc 
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf 
NAME = libft.a

#########################
#  Sources and Objects	#
#########################

SRCS = ft_isalpha.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_striteri.c ft_strmapi.c \
	ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o) 

#########################
#  	  Rules 	#
#########################

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean
	$(MAKE) all

```

Makefile is a wonderful world. There is much to be explore. Now you have a perfectly good and simple makefile that you can modify to manage small and medium-sized software projects. You can add multiple rules to a makefile; you can even create rules that call other rules. For more information on makefiles and the make function, check out the [GNU Make Manual](www.gnu.org/software/make/manual/make.html), which will tell you more than you ever wanted to know (really).


# <a name="#index-5"> Conclusion </a>
Ok! Now that you know what a library is and how to build it, it is your chance to explore more and more in this project! Understanding the workings of libraries in C and the use of Makefiles is essential for efficient software development. Libraries in C provide a modular approach to coding, enabling the reuse of functions and promoting code organization and maintainability. Static and dynamic libraries offer different advantages, from faster execution times to reduced memory usage, depending on the application's needs. <br><br>


Makefiles, on the other hand, streamline the build process by automating the compilation and linking stages. They ensure that only the necessary parts of a project are rebuilt, saving time and reducing the potential for errors. With the ability to define dependencies and custom build rules, Makefiles are powerful tools for managing complex projects!! <br>

Together, the use of libraries and Makefiles can significantly enhance the development workflow, leading to more robust and scalable software solutions. By mastering these tools, software engineers and developers can improve their productivity and ensure their code is both efficient and maintainable. <br>

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&height=150&color=0ABAB5&text=Good%20Job!&section=footer&fontColor=fcf3f2&fontAlignY=46" />
</p>

### License

This work is published under the terms of <a href="https://github.com/lude-bri/42_Common_Core/blob/main/LICENSE.md">42 Unlicense</a>.

<p align="right">(<a href="#readme-top">get to top</a>)</p>

