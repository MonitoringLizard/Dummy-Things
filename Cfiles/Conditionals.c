#include <stdio.h>

int main()
{
    //here we create some varibles, that will be used to store the age
    short int age;

    //printing in the terminal a welcoming message and then asking for the user input, using "scanf" since its just a number
    printf("\n\t\t\tWelcome! to the average +18 site\nBut before we proceed tell us your age (dont lie, otherwise we will know and kill you)\n");
    scanf("%d", &age);

    //to create a "if" statement, just write the following:
    /*"if(condition){code}"
    inside the (), we put what the program needs to check before going to {}, if it find the value to be true, then proceed to the {},
    otherwise it will just jump the {}*/
    if (age < 18)
    {
        if (age <= 0)
        {
            printf("Bruh, you dont even exist\n");
        }
        
        /*"else" statement are used as to create another path the program can take,
         by if the "if" is false then whats inside the "else" is realized*/

        else
        {
            printf("get out, you are a minor, wait some more time before entering here\n");
        }
    }
    else
    {
        printf("you are allowed to enter, enjoy your time ;)\n");
    }
    return 0;
}
