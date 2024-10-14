#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){

    unsigned short int age;
    printf("\n\t\t\tWelcome! to the average +18 site\nBut before we proceed tell us your age (dont lie, otherwise we will know and kill you)\n");
    scanf("%d", &age);
    
    if(age < 18){
        printf("get out, you are a minor, wait some more time before entering here");
    } else {
        printf("you are allowed to enter, enjoy your time ;)");
    }
    return 0;
}
