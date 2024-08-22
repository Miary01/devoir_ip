#include <stdio.h>
#include "treat_ip.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
void printing(char*response){
        for(int i=0;i<strlen(response);i++) {
            putchar(response[i]);
            fflush(stdout);
            usleep(100000);
        }
        printf("\n");
}
void input_ip(char*string){
    system("clear");
    printf("Input the ip:\n");
    printf("->");
    scanf("%[^\n]",string);
}
void treat_ip(char*string,int*first_bit,int*second_bit,int*third_bit,int*fourth_bit){
    sscanf(string,"%d.%d.%d.%d",first_bit,second_bit,third_bit,fourth_bit);
}
void verify_ip(int first_bit,int second_bit,int third_bit,int fourth_bit){
    char response[50];
    if(first_bit>255 || first_bit<0 ||second_bit>255 || second_bit<0  ||third_bit>255 || third_bit<0 || fourth_bit>255 || fourth_bit<0  ){
        strcpy(response,"invalid ip!!!");
        printing(response);
        exit(1);
    }
    else {
        if(first_bit < 128){
            strcpy(response,"your ip is in the class A!!!");
            printing(response);
            exit(1);
        } 
        if(first_bit >= 128 && first_bit<192){
            strcpy(response,"your ip is in the class B!!!");
            printing(response);
            exit(1);
        } 
        if(first_bit >= 192 && first_bit<224){
            strcpy(response,"your ip is in the class C!!!");
            printing(response);
            exit(1);
        } 
          if(first_bit >= 224 && first_bit<240){
            strcpy(response,"your ip is in the class D!!!");
            printing(response);
            exit(1);
        } 
        if(first_bit >= 240){
            strcpy(response,"your ip is in the class C!!!");
            printing(response);
            exit(1);
        } 
    }
}