#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    int age, IPA;
    char gen;
    char name[50];

    printf("Your name pls:\n");
    gets(name);

    printf("Your age pls: ");
    scanf("%d", &age);

    printf("Enter your gender: \n");
    gen = getche();

    if (gen == 'm' || gen == 'M')
        IPA = age / 2 + 7;

    else
        IPA = (age - 7) * 2;

    printf("\n%s your ideal partner\'s age is %d", name, IPA);
}