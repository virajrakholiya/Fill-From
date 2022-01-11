#include<stdio.h>

int main(){

    char name,department;
    float percentage;

    printf("Name:- \n");
    scanf("%c", &name);

    printf("Enetr Your Department :- \n");
    scanf("%c", &department);

    printf("Enetr Your Percentage :- \n");
    scanf("%f", &percentage);

    if (percentage>=35)
    {
        printf("You Are Capable!", percentage);
    }
    else 
    {
        printf("You Are Not Capable!", percentage);
    }
    

    return 0;
}