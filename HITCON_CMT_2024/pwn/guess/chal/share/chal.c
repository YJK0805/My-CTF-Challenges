#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
long long choice,index;

int main(){
    srand(time(0));
    setvbuf(stdout, 0, _IONBF, 0);
    setvbuf(stdin, 0, _IONBF, 0);
    printf("This is HackerSir!\n");
    printf("Welcome to the game!\n");
    printf("You are a hacker, so you hack the system.\n");
    printf("You can be the admin or user.\n");
    printf("press 1 to be admin, press 2 to be user: ");
    scanf("%d", &choice);
    long long num[5];
    for(int i = 0; i < 5; i++){
        num[i] = rand();
    }
    if(choice == 1){
        printf("You are admin now!\n");
        printf("You can watch two numbers!\n");
        for(int i = 0;i < 2;i++){
            printf("Please input the index of the number you want to watch: ");
            scanf("%lld", &index);
            printf("The number is: %lld\n", num[index]);
        }
    }else if(choice == 2){
        printf("You are user now!\n");
        printf("But you can't watch the numbers!\n");
        printf("You are kicked out of the game!\n");
        exit(0);
    }
    char message[0x20];
    printf("Please input your message: ");
    read(0, message, 0x100);
    return 0;
}

