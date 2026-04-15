/*

    why we use file in c language

    1. to store data permanently
    2. to share data between different programs
    3. to store large amount of data that cannot be stored in memory
    4. to store data in a structured way


    types of file in c language
    1. text file
        -> a file that contains data in human-readable format
            -> read function -> r
            -> write function -> w
            -> append function -> a  -> to add data at the end of the file


            fopen() function -> to open a file
            fclose() function -> to close a file
            fprintf() function -> to write data to a file
            fscanf() function -> to read data from a file

    2. binary file
        -> a file that contains data in machine-readable format
*/

// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     FILE *p;
//     p = fopen("display.txt", "w");
//     fprintf(p, "hello world");

//     fclose(p);
// }


// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     FILE *p;
//     char data[100];
//     p = fopen("display.txt", "r");

//     printf("data from file: ");

//     while (fgets(data, sizeof(data), p) != NULL)
//     {
//         printf("%s", data);
//     }
//     fclose(p);
// }


#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *p;
    
    p = fopen("display.txt", "a");

    fprintf(p, "\nThis is a new line added to the file.\n");
    
    fclose(p);
}