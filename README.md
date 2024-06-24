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

_Libaries consist of a set of related functions to perform a common task. Standard system libraries are usually found in `/lib` and `/usr/lib/` directories._ [(source)](https://www.cs.dartmouth.edu/~campbell/cs50/buildlib.html)

Basically, whenever we use `#include`, we are informing to the computer to lookup that standard library (or dictionary, in our analogy) and read the following code accordingly to the signs defined by the library!

But when we create our own library, how does it works? Well, let's talk about the preprocessors!

-----
<h1> Preprocessors </h1>

Preprocessors is a program that processes its input data to produce output that is used as input in another program!

It means that before even reading the code, it will take into account what is defined, almost like rules, and the program will execute accordingly the rules we've set. 

In C programming, preprocessing is the first step in the compilation of a C code. It occurs before the tokenization step. One of the important functions of a preprocessor is to include the header files that contain the library functions used in the program. The preprocessor in C also defines the constants and expands the macros. [(see more)](https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm)

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

So, when we're creating our own library it is important not only to consider the preprocessors, but also, how to write and compile! Meaning that we need to use a `Makefile`

-----
<h1>Makefile</h1>


### License

This work is published under the terms of <a href="https://github.com/lude-bri/42_Common_Core/blob/main/LICENSE.md">42 Unlicense</a>.

<p align="right">(<a href="#readme-top">get to top</a>)</p>


