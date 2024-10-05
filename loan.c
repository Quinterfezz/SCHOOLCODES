#include <stdio.h>
int main() {
    int age;
    int income;

    printf("Enter age:");
    scanf("%d", &age);

    printf("Enter Income:");
    scanf("%d", &income);

    if(age>=21 && income>=21000){
        printf("Congratulations you qualify for a loan");
    }
    else{
        printf("Unfortunately, we are unable to offer you a loan at this time");
    }






    return 0;
}