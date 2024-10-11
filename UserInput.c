#include <stdio.h>
#include <stdbool.h>
#include <string.h>//this fellas is used to manipulate strings, aka a array of chars

int main(){
    //creates all the variables that will be used within the program
    char name[25];//the number in the "[]" means how much storage this char will be taking
    unsigned short int money;

    printf("\nHello adventurer! tell me your name?\n");
    fgets(name, 25, stdin); 
    /*
    "fgets" serves as a alternate way to "scanf", that doesnt have the same limitation of "scanf", as it can read the entire line.
    and this is the structure of "fgets":
    fgets(the name of the variable, how much bytes it can occupy, and the type of the input, in this case its the standard one);
    */
    name[strlen(name) - 1] = '\0';
    /*
    this function is from the library "string.h" 
    and its used to remove the "new line character", byr picking the lenght of the string and subtracting 1, to learn more about it, go to [REDACTED].c to learn more about this command
    */
    printf("nice to meet you, %s, could you tell me how much money you have?\n", name);
    scanf("%d", &money);
    /*
    "scanf" is used to 'see' what the user has written in the command line, 
    and this function will only grab characters from the command line until it find a whhite space
    and this the structure of "scanf":
    scanf("% <= add the format specifier for your variable", &name of the variable);
    */
    printf("haha! now pass all of the %d gold you hvae! dummy\n", money);

    printf("The bandit has stolen all your money and has run away... thats how your adventure starts");
    return 0; 
}