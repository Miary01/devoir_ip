#include <stdio.h>
#include "treat_ip.h"
int main() {    
    //data
    char string[100];
    int first_bit=256;
    int second_bit=256;
    int third_bit=256;
    int fourth_bit=256;
    //function
    input_ip(string);
    treat_ip(string,&first_bit,&second_bit,&third_bit,&fourth_bit);
    verify_ip(first_bit,second_bit,third_bit,fourth_bit);    
    return 0;
}