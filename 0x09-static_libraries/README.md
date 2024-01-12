# 0X09-STATIC_LIBRARIES #
==========================
## Defination ##

_A static library is a file that contains compiled code from one or more object files, which can be linked with other object files or libraries to form an executable._ To create a static library, you need to follow these steps:

* Write the source code for each function in a separate file with the extension .c. For example, write the code for _putchar in _putchar.c.
* Compile each source file into an object file with the extension .o using the gcc command with the -c option. For example, run gcc -c _putchar.c to generate _putchar.o.
* Create a header file with the extension .h that contains the prototypes of all the functions in the library. For example, create a file called main.h and write int _putchar(char c); as the prototype for _putchar.
* Use the ar command with the -rcs options to create the static library file with the extension .a and add all the object files to it. For example, run ar -rcs libmy.a _putchar.o _islower.o ... to create libmy.a and add all the object files listed above.
* Use the ranlib command to generate an index of the symbols defined in the static library, which can speed up the linking process and allow the library functions to call each other. For example, run ranlib libmy.a to update the index of libmy.a.
* Use the ar command with the -t option to list the contents of the static library. For example, run ar -t libmy.a to see the names of the object files in libmy.a.
* Use the nm command to list the symbols defined in each object file in the static library. For example, run nm libmy.a to see the symbols and their types in libmy.a.
* If you haven’t coded all of the functions listed above, you can create empty ones with the right prototype. For example, you can write the following code for _islower:

#include "main.h"

/**
 * _islower - checks for lowercase character
  * @c: the character to check
   * Return: 1 if c is lowercase, 0 otherwise
    */
    int _islower(int c)
    {
        /* TODO: write your code here */
	    return (0);
	    }

Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.