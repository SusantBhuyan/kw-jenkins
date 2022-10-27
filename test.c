#include <stdio.h>
#include <string.h>

 void reverse(char * start, char * end){
    char ch;
    while(start < end){
        ch = *start;
        *start++ = *end;
        *end-- = ch;
    }
 }

 int main(){
    char c[] = "Career";
    int length = strlen(c);
    reverse(c,c+length-1);
    printf("c=%s\n", c);
 }