#include <stdio.h>

int main()
{
    char letter;
    printf("Choose a letter from \'a\' to \'d\'\n");
    scanf("%c", &letter);
    switch (letter)
    {
    case 'a':
        printf("Allosaur is now your dinosaur\n");
        break;
    case 'b':
        printf("Baryonix is now your dinosaur\n");
        break;
    case 'c':
        printf("Carnotaur is now your dinosaur\n");
        break;
    case 'd':
        printf("Dilophosaur is now your dinosaur\n");
        break;
    default:
        printf("[INVALID NUMBER]");
    }

    return 0;
}