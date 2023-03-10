0x09.C - Static libraries

Tasks

0. Create the static library libmy.a including static objects from .c fil
es.
Steps to follow:
        0. cd to alx-low_level_programming
        1. mkdir 0x09-static_libraries to create the mentioned directory
        2. cd into 0x09-static_libraries
        3. Create a README.md file. It shouldn't be empty
        4. Create main.h file....inside include all the prototypes
        5. Create _putchar.c file
        6. Include a main.c file
        7. Using vi create all the 20 .c files with their respective functional code
s
        8. Using gcc -c *.c covert all .c files to static objects.
        9. Using ar rcs libmy.a to create the libmy.a library
        10. Do the ar rcs libmy.a *.c to move every .o files to your library
        11. Run ar -t libmy.a to list all your .o files
        12. Run nm libmy.a to display everything as given in the task
        13. Git add -all or git add .
        14. Git commit -m 'message'
        15. Git push


Task.
1. Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
What to do:
         1. vi create_static_lib.sh while on 0x09-static_libraries directory and on your alx-low_level_programming
         2. While in vi write the necessary script
         3. Convert your ./create_static_lib.sh file to executable mode using chmod u+x (file)
         4. Run ./create_static_lib.sh to test your executable file.
         5. ls *.c to confirm whether your .c files are present
         6. ls *.a to confirm whether your liball.a file is created
         7. git add .
         8. git commit -m 'message'
         9. git push



       **********************END OF YOUR PROJECT****************


I hope this will be of help to someone.
Thank you all.
