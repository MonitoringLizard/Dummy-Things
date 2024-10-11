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
    // store a SINGLE character, no text on these fellas, 
    char ascii = 67;
    // you can use the number corresponding on the ASCII table to the character to store the same thing
    /* %d is to show the number in the ASCII table,and they can go from -128 to +127
    and %c is to show the character itself */
    printf("%d is the same as the character \'%c\'!\n", ascii, ascii);
    // to store like a string of text, we use arrays, like below
    /*               |
                     v                               */
    char text[] = "I hope you are enjoying this :)\n";
    // we use %s to show a string
    printf("%s", text);
    unsigned char unchar = 255; 
    //if unsigned, the char will be able of storing up from 0  to 255

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
    printf("True is %d\nFalse is %d\n", Boo, Lean);

    // Integers
    
    //integers, or int for short, have its purpose of storing numberic values, it have some variations, it mainly uses %d as a reference
    //short ints consume generally 2 bytes of memory and can store up to -32,768 to 32,767, if not unsigned
    short int a = 32767;
    //if unsigned it will be able of storing numbers from 0 to 65,535 
    unsigned short int b = 65535;

    //if neither unsigned or with "short" a integer can store any number from −2,147,483,647 to +2,147,483,647, takes up 4 bytes of memory
    int c = 2147483647;
    unsigned int d = 4294967295;
    //if unsigned, a normal int can store from 0 to +4,294,967,295, oh! and it uses %u instead of %d
    
    //loooooooong ints, why?! make so many integers types!? this type can store from −9,223,372,036,854,775,807 to fricking +9,223,372,036,854,775,807
    //it takes 8 bytes of memory, the heaviest and strongest >:)
    long long int e = 9223372036854775807;
    //If unsigned this long fellas can store all first 18,446,744,073,709,551,615 numbers, not including 0
    unsigned long long int f = 18446744073709551615U;
    //the number above is so large thaat it will appear a warining, to prevent it, we use a "U" after the number to not show a warning
   printf("smallest => %d < %d < %d < %u < %lld < %llu <= biggest",a,b,c,d,e,f);
    
    //and... that ends our little guide to data types in C, i hope you have enjoyed and good luck, programmer!
}