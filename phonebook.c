#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main (void)

{

    //open file
    FILE *file = fopen("phonebook.csv", "a");

    //Get string from the user
    char* name = get_string ("Name: ");
    char* number = get_string ("Number: ");

    //print (write) strings to file
    fprintf( file, "%s, %s\n", name, number);

    //close file
    fclose (file);

}

//The csv file gets updated in real time and is compatable with microsoft excel.

