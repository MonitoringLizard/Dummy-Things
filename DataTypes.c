#include <stdio.h>   //some basic shit for programming in C
#include <stdbool.h> //to use boolean variables, very important

int main()
{
    /*what there will be in the following:
    1- a list of all data types avaible in the C programming language;
    2- what they are, how much memory they use
                    ^
                    |
    (not in all cases, when they only take 1 byte or less),
    3- their special character (to use the data inside the variable) in strings and shit)
    */

                            //char

    char ex = 'c';
    // store a SINGLE character, no text on these fellas
    char ascii = 67;
    // you can use the number corresponding on the ASCII table to the character to store the same thing
    /* %d is to show the number in the ASCII table,
    and %c is to show the character itself */
    printf("%d is the same as the character \'%c\'!\n", ascii, ascii);
    // to store like a string of text, we use arrays, like below
    /*               |
                     v                               */
    char text[] = "I hope you are enjoying this :)\n";
    // we use %s to show a string
    printf("%s", text);

    //float

    float piF = 3.141592653589793;
    /* store a  'floating' number, like 3.14 and 2.5
    the float data type consumes 4 bytes of memory,
    and have a precision of only 6 or 7 digits, wich means it will accurately show to only the 7 first digits*/

    // Double, the cooler float

    double piD = 3.141592653589793;
    /*store again, a floating number...
    BUT it has a higher consumption of memory to 8 bytes and a precision up to 16 digits, isnt that sick?*/
    printf("virgin float => %0.15f\tCHAD double => %0.15lf\n", piF, piD);
    /* to show float, we use %f and to show THE CHAD DOUBLE, we use %lf,
    and we need to specify how much digits we want to show like in '%0.3f',
    or otherwise it will just show the 7 first numbers*/

    printf("just for comparsion: \"3.141592653589793\"\n"); // just for comparsion

    // Boolean

    // Honey! dont forget your #include <stdbool.h>, before using any boolean data types!
    bool Boo = true;
    // 'true' is the same thing as '1', wich means you can just type 1 instead of "true"
    bool Lean = false;
    // the same logic as above, but it uses 0 instead
    printf("True is %d\nFalse is %d", Boo, Lean);
}