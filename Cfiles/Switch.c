#include <stdio.h>

int main()
{
    char letter;
    printf("Choose a letter from \'a\' to \'d\'\n");
    scanf("%c", &letter);

    /*
    "switch" is used as a more efficient way to test a value multiples times and find something thats is true,
    as you can see we use switch(the variable or expression), and next we have "case" and a value,
    it will test if the expression is equal to that value, if true, it will realize everything until it hits "break",
    in case if its false, it will automatically jump to the next "case" 
    */
    switch (letter)
    {
    case 'a':
    /*  ^
        |        
    here it will test if the var "letter" has it value equal to 'a'*/
        printf("Allosaur is now your dinosaur\n");
        break;
        //the "break;" is where, if true, were the program will stop and jump the switch to whats next in line
    case 'b':
        printf("Baryonix is now your dinosaur\n");
        break;
    case 'c':
        printf("Carnotaur is now your dinosaur\n");
        break;
    case 'd':
        printf("Dilophosaur is now your dinosaur\n");
        break;
        // "default" will only happen when every case above is false and it dont need a "break;"
    default:
        printf("[INVALID NUMBER]");
    }

    return 0;
}
/*
    REMENBER: 
    "if" is better for cases that uses other comparsion signs than "=="
    "switch" is made for cases where its needed to test a certain value multiples times using the "=="
*/