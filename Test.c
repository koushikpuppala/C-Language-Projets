#include<stdio.h>
int main(void){
    int age;
    printf("Hey..\nWhat your Age : \n");
    printf("1.17\n2.18\n3.19\n4.20\n");
    printf("Enter your Option :");
    scanf("%d",&age);
    switch (age){
        case 1:{
            printf("17");
            break;
        }
        case 2:{
            printf("18");
            break;
        }
        case 3:{
            printf("19");
            break;
        }
        case 4:{
            printf("20");
            break;
        } default:
            printf("Do you have Eyes");
    }
}