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

-----
<h1>Makefile</h1>


### License

This work is published under the terms of <a href="https://github.com/lude-bri/42_Common_Core/blob/main/LICENSE.md">42 Unlicense</a>.

<p align="right">(<a href="#readme-top">get to top</a>)</p>


