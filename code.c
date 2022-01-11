#include<stdio.h>

int main(){

    char name,department;
    float percentage;

    printf("Name:- \n");
    scanf("%s", &name);

    printf("Enetr Your Department :- \n");
    scanf("%s", &department);

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