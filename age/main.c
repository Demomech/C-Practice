#include <stdio.h>
#include <stdlib.h>

int main()

    {
    int age;

    printf("Enter your age:\n");
    scanf("%d", &age);

    if(age >= 18){printf("18 or over");}
    else {printf("Under 18");}

    return 0;
}
