#include<stdio.h>

void win(){
    system("/bin/sh");
}
char buf[0x100];
int main(){
    setvbuf(stdout, 0, 2, 0);
    setvbuf(stdin, 0, 2, 0);
    setvbuf(stderr, 0, 2, 0);
    puts("Welcome to HITCON 2024!");
    puts("This is HackerSir!");
    puts("Are you a hacker?");
    puts("If you are a hacker, try to get the flag!");
    puts("If you have question, press 1, otherwise press 0: ");
    char choice[2];
    scanf("%s", choice);
    if(choice[0] == '1'){
        puts("Please ask your question! ");
        read(0, buf, 0x100);
        printf(buf);
    }
    puts("\n");
    puts("You can leave your message here!");
    puts("We are happy to see you!");
    puts("Goodbye!");
    char buf2[10];
    read(0, buf2, 0x100);
    return 0;
}

