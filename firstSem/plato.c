#include <stdio.h>

void main(){

    char name[100];

    int age;

    int idealAge;

    // ask name of user
    printf("\nYour name please: \n");
    // recieve name of user
    scanf("%s", &name);
    // ask age of user
    printf("\nYour age please! : \n");
    // recieve age of user
    scanf("%d", &age);

    // formula for plato's ideal partner's age

    idealAge = (age / 2) + 7;

    printf("\n%s your ideal partner's age is %d\n", name, idealAge);
}