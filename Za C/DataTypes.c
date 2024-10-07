#include <stdio.h> //some basic shit for programming in C
#include <stdbool.h> //to use boolean variables, very important

int main(){
    /*what there will be in the following:
    1- a list of all data types avaible;
    2- what they are, how much memory they use,
    3- their special character(to use in strings and shit)
    */

   //char
   char single = 'C'; //store a single character, the content can be a character and a number, referencing the ASCII
   char ascii = 67; //
   // %d is to show the number in the ASCII table, and %c is to show the character
   printf("%d = %c\n",single,ascii );
   //to store like a string of text, we use arrays
   char text[] = "Hello world\n";
   printf("%s",text); //we use %s to show a string, to show a determined character from a string, we use...
    
    //float
    float piF = 3.141592653589793; /*store a "broken and floating" number, 
    the float data type consumes 4 bytes of memory, 
    and have a precision of only 6 or 7 digits, wich means it will accurately show to only the 7 first digits*/

    //Double, aka the cooler float
    double piD = 3.141592653589793; /*store again, a floating number...
    BUT it has a higher consumption of memory(to 8 bytes!! holy moly!) and precision (up to 16 digits, isnt that sick?)*/
    printf("virgin float => %1.15f CHAD double => %0.15lf\n", piF, piD); /* to show float, we use %f and to show THE CHAD DOUBLE, we use %lf, 
    and we need to specify how much digits we want to show */

    //Boolean (the logical)
    //Honey! dont forget your #include <stdbool.h>, before using any boolean data types!
    bool T = true; // true == 1, wich means you can just type 1 instead of "true"
    bool F = false; // the same logic as above, but it uses 0 instead
    printf("User: I am sigma\nRealGPT: your statement is %d\n", T);
} 
