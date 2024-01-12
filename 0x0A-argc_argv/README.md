# 0x0A. C - argc, argv #

## Defination of argc(argument count) and argv(argument vector) ##

__They are the parameters of the main function in C which allow you to pass command-line arguments to your program.__

* argc (argument count) is an integer variable that stores the number of command-line arguments passed by the user, including the name of the program. For example, if you run ./myprog hello world, then argc will be 3.

* argv (argument vector) is an array of character pointers that point to the command-line arguments. The first element, argv[0], is the name of the program. The last element, argv[argc], is a NULL pointer. For example, if you run ./myprog hello world, then argv[0] will be ./myprog, argv1 will be hello, argv2 will be world, and argv3 will be NULL.

You can use argc and argv to access and manipulate the command-line arguments in your program. For example, you can loop through them, print them, or convert them to other data types. Here is a simple program that prints the command-line arguments:
__________________________________________________________________________________
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("You have entered %d arguments:\n", argc);
        for (int i = 0; i < argc; i++)
	    {
	            printf("%s\n", argv[i]);
		        }
			    return 0;
			    }
			    }
__________________________________________________________________________________

1. ## 0-whatsmyname.c ##
- Write a program that prints its name, followed by a new line.

* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program

**This program uses the argv array, which contains the command-line arguments passed to the program. The first element of argv, argv[0], is usually the name of the program itself12. By printing argv[0], the program will display its name, followed by a new line. If you rename the program, it will print the new name, without having to compile it again. You should not remove the path before the name of the program, as it may be useful for finding the location of the executable file1**

2. ## 1-args.c ##
Write a program that prints all arguments it receives.

* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

** #include <stdio.h>

int main(int argc, char *argv[])
{
    // Loop through all arguments, starting from the first one
        for (int i = 0; i < argc; i++)
	    {
	            // Print the argument, followed by a new line
		            printf("%s\n", argv[i]);
			        }
				    return 0;
				    }

This program uses the same parameters as the previous example, argc and argv, to access the command-line arguments. It loops through all of them, starting from the first one (argv[0]), and prints each one on a separate line. You can test this program by compiling **